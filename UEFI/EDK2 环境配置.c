=== Platform & Tool ===
EDK2: http://sourceforge.net/projects/edk2/
VS：Microsoft Visual Studio 2013
OS: win7-64 / win8.1



=== 环境配置 [cmd] ===
一、下载 EDK2 Source 以及 win32
	因为，下载 DEK2 Source 后，发现 BaseTools\Bin\Win32只是个快捷键，需要单独下载 win32。

二、安装 VS2013
	EDK2 需要用到 VS 的一些编译工具。

三、配置 EDK2 环境(cmd)
	a. cmd 命令行中执行： Edk2Setup.bat --NT32
	或，“VS2013 开发人员命令提示”中执行：Edk2Setup.bat
	b. 修改生成的 "BaseTools\Conf" 目录下的文件
		target.txt
		tools_def.txt
		build_rule.txt

四、编译
	build
	build -p Nt32Pkg\Nt32Pkg.dsc -a IA32

五、调试，进入仿真模式
	build run
	Build\NT32IA32\DEBUG_VS2013x86\IA32\SecMain.exe

六、shell 环境
	>fs0:	[对应“Build\NT32IA32\DEBUG_VS2013x86\IA32” 目录]
	>exit	[进入 Setup]
	>reset	[退出shell/仿真模式]
	


=== 环境配置 [VS2013] ===
一、打开 VS2013，导入 EDK2 Source(保持原文件/夹目录结构)
	10min 左右完成，并生成 *.sln 工程文件。

二、配置编译器&调试器
	---[编译]---
	[生成命令行]			call Edk2Setup.bat & build
	[全部重新生成命令行]	call Edk2Setup.bat & build clean & build
	[清除命令行]			call Edk2Setup.bat & build clean
	---[调试]---
	[命令参数]	D:\UEFI\EDK-18916\Build\NT32IA32\DEBUG_VS2013x86\IA32\SecMain.exe
	[工作目录]	D:\UEFI\EDK-18916\Build\NT32IA32\DEBUG_VS2013x86\IA32

三、运行与调试
	直接选择 VS2013 界面的按键：
	"生成 Ctrl+Shift+B"	-> 即，build
	"调试 F5" 			-> 即，build run



=== 测试程序 Hello World ===
一、编写 *.c 和 *.inf

二、将 *.inf 的路径添加到 Nt32Pkg.dsc 或 MdeModulePkg.dsc 的 [Components] 部分
	Nt32Pkg.dsc 		-> 仿真模式环境
	MdeModulePkg.dsc 	-> 真实的 shell 环境。如：shell U 盘！

三、编译
	--- 仿真模拟 ---
	> Edk2Setup.bat
	> build -p Nt32Pkg\Nt32Pkg.dsc -a IA32
	>>>生成 *.efi 的路径：
	D:\UEFI\EDK2-18916\Build\NT32IA32\DEBUG_VS2013x86\IA32\zhqBaseCode.efi
	
	--- U 盘shell ---
	> Edk2Setup.bat
	> build -p MdeModulePkg\MdeModulePkg.dsc -a X64
	> build -p MdeModulePkg\MdeModulePkg.dsc -a X64 -m zhq\BaseCode\BaseCode.inf
	>>>生成 *.efi 的路径：
	D:\UEFI\EDK2-18916\Build\MdeModule\DEBUG_VS2013x86\X64\zhqBaseCode.efi
	
四、调试
	--- 仿真模拟 ---
	> build run
	> fs0:
	> *.efi
	
	--- U 盘shell ---
	将 *.efi 拷贝到 Shell U盘，直接运行！
	> fsX:
	> *.efi





