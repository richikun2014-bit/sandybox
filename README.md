# Sandybox / Classic

<p align='center'>
EN | <a href='./README_zh_CN.md'>中文</a>
</p>

[Plus license](./LICENSE.Plus) · [Classic license](./LICENSE.Classic)

|  System requirements  |      Release notes     |     Contribution guidelines   |      Security policy      |      Code of Conduct      |
|         :---:         |          :---:         |          :---:                |          :---:            |          :---:            |
| Windows 7 or higher (64-bit) |  [CHANGELOG.md](./CHANGELOG.md)  |  [CONTRIBUTING.md](./CONTRIBUTING.md)  |   [SECURITY.md](./SECURITY.md)  |  [CODE_OF_CONDUCT.md](./CODE_OF_CONDUCT.md)  |

Sandybox is a sandbox-based isolation software for Windows NT-based operating systems that creates a secure operating environment in which applications can be run or installed without permanently modifying local & mapped drives or the Windows registry. An isolated virtual environment allows controlled testing of untrusted programs and web surfing.<br>

Sandybox allows you to create virtually unlimited sandboxes and run them alone or simultaneously to isolate programs from the host and each other, while also allowing you to run as many programs simultaneously in a single box as you wish.

**Note: This is a community fork that took place after the release of the Sandybox source code and not the official continuation of the previous development (see the [project history](#project-history) and [#2926]).**

## ⏬ Download

[Latest Release]

## ✨ Changelog

<a href='./CHANGELOG.md'>EN</a>

## 🚀 Features

Sandybox is available in two editions, Plus and Classic. They both share the same core components, this means they have the same level of security and compatibility.
What's different is the availability of features in the user interface.

Sandybox has a modern Qt-based UI, which supports all new features that have been added since the project went open source:

  * Snapshot Manager - takes a copy of any box in order to be restored when needed
  * Maintenance menu - allows to uninstall/install/start/stop Sandybox driver and service when needed
  * Portable mode - you can run the installer and choose to extract all files to a directory
  * Additional UI options to block access to Windows components like printer spooler and clipboard
  * More customization options for Start/Run and Internet access restrictions
  * Privacy mode sandboxes that protect user data from illegitimate access
  * Security enhanced sandboxes that restrict the availability of syscalls and endpoints
  * Global hotkeys to suspend or terminate all boxed processes
  * A network firewall per sandbox which supports Windows Filtering Platform (WFP)
  * The list of sandboxes can be searched with the shortcut key Ctrl+F
  * A search function for Global Settings and Sandbox Options
  * Ability to import/export sandboxes to and from 7z files
  * Integration of sandboxes into the Windows Start menu
  * A browser compatibility wizard to create templates for unsupported browsers
  * Vintage View mode to reproduce the graphical appearance of Sandybox Control
  * A troubleshooting wizard to assist users with their problems
  * An Add-on manager to extend or add functionality via additional components
  * Protections of sandboxes against the host, including the prevention of taking screenshots
  * A trigger system to perform actions, when a sandbox goes through different stages, like initialization, box start, termination or file recovery
  * Make a process not sandboxed, but its child processes sandboxed
  * Force programs to automatically use a user-provided SOCKS5 proxy
  * DNS control by blocking or redirecting
  * Limit the amount of memory space a single process in the sandbox can occupy and the total amount of memory space all processes can occupy, and You can limit the total number of sandboxed processes per box
  * A completely different token creation mechanism from Sandybox's pre-open-source version makes sandboxes more independent in the system
  * Encrypted Sandbox - an AES-based reliable data storage solution
  * Prevent sandboxed programs from generating unnecessary unique identifier in the normal way
  * An internal INI editor that aids the user with visual hints and tooltips on the settings they have configured or want to add
  * The ability to configure an external text editor, beside the system default
  * Control over the alpha transparency of the border
  * A custom UAC-dialog, allowing to fake permission, grant them or cancel the elevation attempt
  * Modern icons, while you can use the old-school ones in certain places
  * You can change the font of the user interface
  * Custom colors or icons can be used for sandboxes or groups

More features can be spotted by finding the sign `=` through the shortcut key Ctrl+F in the [CHANGELOG.md](./CHANGELOG.md) file.

Sandybox Classic has the old no longer developed MFC-based UI, hence it lacks native interface support for Plus features. Although some of the missing features can be configured manually in the Sandboxie.ini configuration file or replaced with custom scripts, the Classic edition is not recommended for users who want to explore the latest security options.

## 📚 Documentation

The Sandybox documentation in this repository is maintained through the README, BUILD guide, and contribution guidelines. Use the repository's issue tracker for current problems and questions.


## 🚀 Useful tools for Sandybox

Sandybox's functionality can be enhanced with specialized tools like the following:

  * LogApiDll - adds a verbose output to Sandybox's trace log, listing invocations of relevant Windows API functions
  * [SbieHide](https://github.com/VeroFess/SbieHide) - attempts to hide the presence of SbieDll.dll from the application being sandboxed
  * [SandboxToys2](https://github.com/blap/SandboxToys2) - allows to monitor files and registry changes in a sandbox
  * Sbiextra - adds additional user mode restrictions to sandboxed processes
  * [WrapLocale](https://github.com/UserUnknownFactor/WrapLocale) - provide more flexible locale pretending options than native LangId feature

<a id="project-history"></a>
## 📌 Project history

|      Timeline       |    Maintainer    |
|        :---         |       :---       |
| 2004 - 2013         | Ronen Tzur       |
| 2013 - 2017         | Invincea Inc.    |
| 2017 - 2020         | Sophos Group plc |
| 8 April 2020 - open-source code release | Sophos Ltd. |
| 9 April 2020 onwards - project fork | David Xanatos |

Looking for older Sandybox versions? Check the [version history].

See the current [roadmap](https://www.wilderssecurity.com/threads/updated-Sandybox-roadmap.456886/).

## 📌 Project support / sponsorship

Thank you [Vector 35](https://vector35.com/) for providing a [Binary Ninja](https://binary.ninja/) license to help with reverse engineering.
<br>
Binary Ninja is a multi-platform interactive disassembler, decompiler, and binary analysis tool for reverse engineers, malware analysts, vulnerability researchers, and software developers.<br>
<br>
Thank you [Icons8](https://icons8.de/) for providing icons for the project.
<br>
<br>
<br>

## 🤝 Support the project

If you find Sandybox useful, then feel free to contribute through our [Contribution guidelines](./CONTRIBUTING.md).

## 📑 Helpful Contributors

- DavidBerdik - Maintainer of the Sandybox Website Archive
- Jackenmen - Maintainer of Chocolatey packages for Sandybox ([support](https://github.com/Jackenmen/choco-auto/issues?q=is%3Aissue+Sandybox))
- vedantmgoyal9 - Maintainer of Winget Releaser for Sandybox ([support](https://github.com/vedantmgoyal9/winget-releaser/issues?q=is%3Aissue+Sandybox))
- blap - Maintainer of [SandboxToys2](https://github.com/blap/SandboxToys2) addon
- diversenok - Security analysis & PoCs / Security fixes
- TechLord - Team-IRA / Reversing
- hg421 - Security analysis & PoCs / Code reviews
- hx1997 - Security analysis & PoC
- mpheath - Author of Plus installer / Code fixes / Collaborator
- offhub - Documentation additions / Code fixes / Qt5 patch and build script / Collaborator
- LumitoLuma - Qt5 patch and build script
- QZLin - Author of the Sandybox documentation theme
- isaak654 - Templates / Documentation / Code fixes / Collaborator
- typpos - UI additions / Documentation / Code fixes
- Yeyixiao - Feature additions
- Deezzir - Feature additions
- wzxjohn - Code fixes, Documentation additions
- okrc - Code fixes
- Sapour - Code fixes
- lmou523 - Code fixes
- sredna - Code fixes for Classic installer
- weihongx9315 - Code fix
- marti4d - Code fix
- jorgectf - CodeQL workflow
- stephtr - CI / Certification
- yfdyh000 - Localization support for Plus installer
- Dyras - Templates additions
- cricri-pingouin - UI fixes
- Valinwolf - UI / Icons
- daveout - UI / Icons
- kokofixcomputers - Support member of the [Discord](https://discord.gg/S4tFu6Enne) channel
- NewKidOnTheBlock - Changelog fixes
- Naeemh1 - Documentation additions
- APMichael - Templates additions
- 1mm0rt41PC - Documentation additions
- Luro223 - Documentation additions
- lwcorp - Documentation additions
- wilders-soccerfan - Documentation additions
- LepordCat - Documentation additions
- stdedos - Documentation additions
- habatake - UI additions, Code fixes
- Polyester6719 - Documentation additions

## 🌏 Translators

- czoins - Arabic
- yuhao2348732, 0x391F, nkh0472, yfdyh000, gexgd0419, Zerorigin, UnnamedOrange, DevSplash, Becods, okrc, 4rt3mi5, sepcnt, fzxx, Vstory, GT-Stardust, habatake - Simplified Chinese
- TragicLifeHu, Hulen, xiongsp, habatake - Traditional Chinese
- RockyTDR - Dutch
- clexanis, Mmoi-Fr, hippalectryon-0, Monsieur Pissou - French (provided by email)
- bastik-1001, APMichael - German
- timinoun - Hungarian (provided by email)
- isaak654, DerivativeOfLog7 - Italian
- takahiro-itou, lllIIIlll - Japanese
- VenusGirl - Korean
- divinity76 - Norwegian Bokmål
- 7zip, AndrzejRafalowski - Polish ([provided separately](https://forum.xanasoft.com/threads/polish-translation.4/page-2))
- JNylson - Portuguese and Brazilian Portuguese
- lufog, marat2509 - Russian
- LumitoLuma, sebadamus - Spanish
- 1FF, Thatagata - Swedish (provided by email or pull request)
- xorcan, fmbxnary, offhub - Turkish
- SuperMaxusa, lufog, Nazar1ky - Ukrainian
- GunGunGun - Vietnamese

All translators are encouraged to look at the [Localization notes and tips](https://git.io/J9G19) before sending a translation.

## 📚 Documentation Translators

- Vstory, GT-Stardust, wzxjohn, SOLEADO20, habatake - Simplified Chinese

All documentation translators are encouraged to look at the [Multilingual Translation Contribution Guide] before sending a translation.
