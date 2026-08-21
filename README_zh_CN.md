# Sandybox / Classic

<p align='center'>
<a href='./README.md'>EN</a> | 中文
</p>

[Plus 许可证](./LICENSE.Plus) · [Classic 许可证](./LICENSE.Classic)

|      系统要求      |      发布说明      |     贡献指南      |      安全政策      |      行为准则       |
|        :---:       |          :---:     |          :---:    |          :---:      |          :---:       |
| Windows 7 或更高版本 (64位) | [CHANGELOG_zh_CN.md](./CHANGELOG_zh_CN.md) | [CONTRIBUTING.md](./CONTRIBUTING.md) | [SECURITY.md](./SECURITY.md) | [CODE_OF_CONDUCT.md](./CODE_OF_CONDUCT.md) |

Sandybox 是一种基于沙盒的隔离软件，适用于 Windows NT 操作系统。它创建了一个类似沙盒的隔离操作环境，在该环境中，可以运行或安装应用程序，而不对本地和映射驱动器及 Windows 注册表进行永久性修改。隔离的虚拟环境可以控制不受信任程序的测试和网络浏览。<br>

Sandybox 允许您创建几乎无限的沙盒，并单独或同时运行它们，以隔离程序与主机及彼此的访问，同时还允许您在单个沙盒中同时运行尽可能多的程序。

**注意：这是一个社区分支，发生在 Sandybox 源代码发布后，并不是之前开发的官方延续（请参见 [项目历史](#project-history) 和 [#2926]）。**

## ⏬ 下载

[最新版本]

## ✨ 更新日志

<a href='./CHANGELOG_zh_CN.md'>中文</a>

## 🚀 功能

Sandybox 提供两个版本，Plus 和 Classic。它们共享相同的核心组件，这意味着它们具有相同的安全性和兼容性水平。
不同之处在于用户界面中功能的可用性。

Sandybox 拥有基于现代 Qt 的用户界面，支持自项目开源以来添加的所有新功能：

  * 快照管理器 - 复制任意沙盒的状态副本以便在需要时恢复
  * 维护菜单 - 支持在需要时卸载/安装/启动/停止 Sandybox 驱动程序和服务
  * 便携模式 - 运行安装程序并选择将所有文件解压到指定目录
  * 额外的界面选项，可阻止访问 Windows 组件如打印机后台处理程序和剪贴板
  * 针对“开始/运行”和互联网访问限制提供更多自定义选项
  * 隐私模式沙盒，保护用户数据免受非法访问
  * 安全增强沙盒，限制系统调用和端点的可用性
  * 全局热键，用于挂起或终止所有沙盒内进程
  * 每个沙盒的网络防火墙，支持 Windows 过滤平台（WFP）
  * 沙盒列表支持使用快捷键 Ctrl+F 搜索
  * 支持搜索全局设置和沙盒选项
  * 支持将沙盒导入/导出为 7z 文件
  * 沙盒集成到 Windows 开始菜单
  * 一个浏览器兼容性向导，用于为不支持的浏览器创建模板
  * 经典视图模式，重现 Sandybox Control 的图形界面
  * 故障排除向导，帮助用户解决常见问题
  * 插件管理器，通过附加组件扩展或新增功能
  * 保护沙盒免受主机影响，包括防止截图
  * 触发系统，当沙盒经历初始化、启动、终止或文件恢复等不同阶段时执行操作
  * 允许某进程不受沙盒限制，但其子进程受沙盒保护
  * 将沙盒作为一种控制单元，强制程序自动使用 SOCKS5 代理
  * DNS 解析控制，具有沙盒粒度的控制能力
  * 限制沙盒中的进程数量及其占用的总内存空间，并且可以限制每个沙盒中的沙盒化进程总数
  * 完全不同于 Sandybox 开源前版本的令牌创建机制，使沙盒在系统中更具独立性
  * 加密沙盒 - 基于 AES 的可靠数据存储解决方案
  * 防止沙盒程序以常规方式生成不必要的唯一标识符

更多功能可以通过在 [CHANGELOG_zh_CN.md](./CHANGELOG_zh_CN.md) 文件中使用快捷键 Ctrl+F 查找符号 `=` 来发现。

Sandybox Classic 采用了不再开发的基于 MFC 的旧版界面，因此它不支持 Plus 功能的原生界面。尽管部分缺失的功能可以通过手动编辑 Sandboxie.ini 配置文件或使用自定义脚本来实现替代，但不建议希望体验最新安全选项的用户使用 Classic 版本。

## 📚 文档

本仓库通过 README、编译指南和贡献指南维护 Sandybox 文档。当前问题和使用疑问请直接查看本仓库的问题列表。


## 🚀 Sandybox 的实用工具

Sandybox 的功能可以通过以下专业工具进行增强：

  * LogApiDll - 为 Sandybox 的跟踪日志添加详细输出，列出相关 Windows API 函数的调用情况
  * [SbieHide](https://github.com/VeroFess/SbieHide) - 尝试隐藏 SbieDll.dll 在被沙盒化应用中的存在
  * [SandboxToys2](https://github.com/blap/SandboxToys2) - 允许监控沙盒内的文件和注册表更改
  * Sbiextra - 对沙盒进程添加额外的用户模式限制

<a id="project-history"></a>


