# Sandybox 本地编译指南（x64）

本文档基于 `.github/workflows/main.yml` 整理，涵盖从零开始编译 Sandybox x64 版本的完整步骤及已知问题。

---

## 一、前置条件

| 组件 | 版本/说明 | 用途 |
|------|----------|------|
| Visual Studio 2022 | Community/Professional/Enterprise | MSBuild、C++ 编译器 |
| Windows SDK | 10.0.22621.0（推荐） | Windows API 头文件和库 |
| Windows Driver Kit (WDK) | 与 SDK 版本匹配 | 编译内核驱动 `SbieDrv.sys` |
| 7-Zip | 默认安装到 `C:\Program Files\7-Zip\` | 解压 Qt 安装包 |
| Git | 任意版本 | 拉取源码 |

### 安装注意事项

1. **VS2022 工作负载**：安装"使用 C++ 的桌面开发"。
2. **WDK**：务必从 [Microsoft 官网](https://learn.microsoft.com/zh-cn/windows-hardware/drivers/download-the-wdk) 下载与 Windows SDK 版本匹配的 WDK。如果 SDK 是 `10.0.22621.0`，WDK 也应对应 `10.0.22621.x`。
3. **7-Zip**：必须安装在默认路径 `C:\Program Files\7-Zip\7z.exe`，否则 Qt 安装脚本会失败。

---

## 二、首次编译完整流程

打开 **PowerShell**，进入仓库根目录（`C:\Users\guohe\code\Sandybox`），按顺序执行以下命令：

### 步骤 1：编译 Sandybox 核心（用户模式组件）

```powershell
# x86 DLLs & svc（必须，即使目标平台是 x64）
msbuild /t:build Sandboxie\SandboxDll.sln /p:Configuration="SbieRelease" /p:Platform=Win32 -maxcpucount:8

# x64 全部组件
msbuild /t:build Sandboxie\Sandbox.sln /p:Configuration="SbieRelease" /p:Platform=x64 -maxcpucount:8
```

> **已知问题**：`Sandbox.sln` 中 `Start` 项目缺少对 `Common` 项目的依赖声明。如果首次编译报错 `LINK : fatal error LNK1181: 无法打开输入文件“Common.lib”`，说明 `Start` 先于 `Common` 被链接。此时只需**重新运行一次**上面的 x64 编译命令即可（因为第二次运行时 `Common.lib` 已生成）。

### 步骤 2：编译内核驱动

```powershell
msbuild /t:build Sandboxie\SandboxDrv.sln /p:Configuration="SbieRelease" /p:Platform=x64 -maxcpucount:8
```

> **已知问题**：驱动项目的 `WindowsTargetPlatformVersion` 默认使用 `$(LatestTargetPlatformVersion)`。如果你的系统安装了多个 Windows SDK（例如 `10.0.26100.0`），且最新版本的 SDK 缺少 WDK 内核模式头文件（`km\ntifs.h`），编译会失败。
>
> **解决方法**：编译时显式指定一个包含 WDK 头文件的 SDK 版本：
> ```powershell
> msbuild /t:build Sandboxie\SandboxDrv.sln /p:Configuration="SbieRelease" /p:Platform=x64 /p:WindowsTargetPlatformVersion=10.0.22621.0 -maxcpucount:8
> ```

### 步骤 3：安装 Qt 框架

```powershell
# 安装 Qt6 x64
SandboxiePlus\install_qt.cmd x64

# 安装 Jom（Qt 并行构建工具）
SandboxiePlus\install_jom.cmd
```

> **依赖检查**：`install_qt.cmd` 内部调用 `"C:\Program Files\7-Zip\7z.exe"` 解压下载的 `.7z` 包。如果 7-Zip 未安装在此路径，脚本会静默失败（只显示"系统找不到指定的路径"）。
>
> **网络注意**：从 GitHub 下载 Qt 包（约几百 MB）可能需要较长时间。如果下载卡住，可手动下载对应 `.7z` 文件放到仓库根目录，再重新运行脚本。

### 步骤 4：编译 Sandybox（GUI 及组件）

`qmake` 需要直接调用 MSVC 编译器 `cl.exe`，因此**必须先初始化 VS 的 x64 编译环境**，再执行脚本。

```powershell
cmd /c "call `"C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat`" x64 && SandboxiePlus\qmake_plus.cmd x64 build_qt6"
```

> **验证编译结果**：脚本成功后会在 `SandboxiePlus\bin\x64\Release\` 生成以下文件：
> - `UGlobalHotkey.dll`
> - `qtsingleapp.dll`
> - `MiscHelpers.dll`
> - `QSbieAPI.dll`
> - `SandMan.exe`

### 步骤 5：编译 SbieShell

```powershell
msbuild /t:restore,build -p:RestorePackagesConfig=true SandboxiePlus\SbieShell\SbieShell.sln /p:Configuration="Release" /p:Platform=x64
```

### 步骤 6：编译 Sandybox Tools

```powershell
msbuild /t:build SandboxieTools\SandboxieTools.sln /p:Configuration="Release" /p:Platform=x64 -maxcpucount:8
```

### 步骤 7：合并打包

```powershell
# 补全 Qt6 多语言文件
Installer\fix_qt5_languages.cmd x64 build_qt6

# 下载 OpenSSL 库
Installer\get_openssl.cmd

# 下载 7z 组件
Installer\get_7zip.cmd

# 合并所有输出到安装目录
Installer\copy_build.cmd x64 build_qt6

# 收集安装包素材
Installer\get_assets.cmd
```

最终输出目录：`Installer\SbiePlus_x64\`

---

## 三、增量编译（修改代码后）

如果只是修改了部分代码，不需要重新跑完整的安装脚本，只需编译受影响的项目：

### 修改了核心代码（Sandboxie/ 下）

```powershell
msbuild /t:build Sandboxie\SandboxDll.sln /p:Configuration="SbieRelease" /p:Platform=Win32 -maxcpucount:8
msbuild /t:build Sandboxie\Sandbox.sln /p:Configuration="SbieRelease" /p:Platform=x64 -maxcpucount:8
msbuild /t:build Sandboxie\SandboxDrv.sln /p:Configuration="SbieRelease" /p:Platform=x64 /p:WindowsTargetPlatformVersion=10.0.22621.0 -maxcpucount:8
```

### 修改了 Plus 代码（SandboxiePlus/ 下）

```powershell
cmd /c "call `"C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat`" x64 && SandboxiePlus\qmake_plus.cmd x64 build_qt6"
```

### 修改了 Tools 代码

```powershell
msbuild /t:build SandboxieTools\SandboxieTools.sln /p:Configuration="Release" /p:Platform=x64 -maxcpucount:8
```

### 重新合并

任何代码修改后，若要生成可运行的完整包，最后都需要重新执行：

```powershell
Installer\copy_build.cmd x64 build_qt6
```

---

## 四、常见问题速查

| 现象 | 原因 | 解决 |
|------|------|------|
| `LINK : fatal error LNK1181: 无法打开输入文件“Common.lib”` | `Sandbox.sln` 中 `Start` 与 `Common` 的依赖顺序问题 | 重新运行一次 `Sandbox.sln` 的编译命令 |
| `error MSB8020: 无法找到 WindowsKernelModeDriver10.0 的生成工具` | 未安装 WDK | 安装与 SDK 版本匹配的 WDK |
| `无法打开包括文件: “ntifs.h”` | 驱动项目自动解析到了没有 WDK 头文件的 SDK 版本 | 编译时加 `/p:WindowsTargetPlatformVersion=10.0.22621.0` |
| `系统找不到指定的路径`（Qt 安装时） | 7-Zip 未安装在 `C:\Program Files\7-Zip\` | 安装 7-Zip 到默认路径，重新运行 `install_qt.cmd` |
| `Project ERROR: Cannot run compiler 'cl'` | `qmake` 找不到 MSVC 编译器 | 先运行 `vcvarsall.bat x64` 初始化环境，再执行 `qmake_plus.cmd` |

---

## 五、验证编译结果

### 1. 检查输出文件

合并完成后，确认以下关键文件存在于 `Installer\SbiePlus_x64\`：

- `SandMan.exe` —— GUI 管理器
- `SbieDrv.sys` —— 内核驱动
- `SbieSvc.exe` —— 服务程序
- `Start.exe` —— 沙箱启动器
- `SbieDll.dll` —— 注入 DLL

### 2. 运行 GUI 程序

直接运行：

```powershell
.\Installer\SbiePlus_x64\SandMan.exe
```

如果能正常显示主界面，说明 Qt 及用户模式组件编译正常。

### 3. 完整功能测试（驱动加载）

本地编译的 `SbieDrv.sys` **没有数字签名**，Windows 默认会阻止加载。如需测试完整的沙箱功能，必须：

1. **启用测试签名模式**（管理员 PowerShell）：
   ```powershell
   bcdedit /set testsigning on
   ```
   然后**重启电脑**。

2. 以管理员身份运行 `SandMan.exe`，按提示安装驱动。

3. 创建沙箱，运行程序（如记事本）进行测试。

> **安全提醒**：测试签名模式会降低系统安全性，验证完成后建议关闭：
> ```powershell
> bcdedit /set testsigning off
> ```

---

## 六、完整编译命令汇总（一键复制版）

以下是在干净的 VS2022 x64 Native Tools 环境（或已运行 `vcvarsall.bat x64` 的 PowerShell）中，从零编译的完整命令序列：

```powershell
# 1. 核心（x86 DLLs + x64 全部）
msbuild /t:build Sandboxie\SandboxDll.sln /p:Configuration="SbieRelease" /p:Platform=Win32 -maxcpucount:8
msbuild /t:build Sandboxie\Sandbox.sln /p:Configuration="SbieRelease" /p:Platform=x64 -maxcpucount:8

# 2. 驱动（显式指定 SDK 版本避免 WDK 头文件缺失问题）
msbuild /t:build Sandboxie\SandboxDrv.sln /p:Configuration="SbieRelease" /p:Platform=x64 /p:WindowsTargetPlatformVersion=10.0.22621.0 -maxcpucount:8

# 3. Qt + Jom（首次编译需要，后续可跳过）
SandboxiePlus\install_qt.cmd x64
SandboxiePlus\install_jom.cmd

# 4. Plus GUI（必须带 vcvarsall 环境）
cmd /c "call `"C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat`" x64 && SandboxiePlus\qmake_plus.cmd x64 build_qt6"

# 5. SbieShell
msbuild /t:restore,build -p:RestorePackagesConfig=true SandboxiePlus\SbieShell\SbieShell.sln /p:Configuration="Release" /p:Platform=x64

# 6. Tools
msbuild /t:build SandboxieTools\SandboxieTools.sln /p:Configuration="Release" /p:Platform=x64 -maxcpucount:8

# 7. 合并打包
Installer\fix_qt5_languages.cmd x64 build_qt6
Installer\get_openssl.cmd
Installer\get_7zip.cmd
Installer\copy_build.cmd x64 build_qt6
Installer\get_assets.cmd
```
