# PopcornKernel




The Popcorn Kernel is the OS Kernel for the upcoming KudOS Project.


We have put the source code on GitHub so that our community can support us with adding features and fixing bugs via pull requests.

You are currently on the 64-bit branch. This is the first step of making the project 32-bit capable.

Just head into the "ostest" folder to get started!
You will see a help file explaining what the folders are for.

Also make sure to delete the readmes from your own copy when compiling
as this may cause issues.

Supported and Tested Virtualization Software so far: QEMU/QtEmu/UTM (a lot of apps that run on QEMU), VirtualBox and VMware.

Unsupported Virtualization Software so far: Virtual x86 on copy.sh/v86 (No Long Mode Support)

Supported and Tested Machines: Toshiba Chromebook 2 using MrChromebox SeaBIOS and Acer Aspire One DXXX Models.

Unsupported Machines: All EFI Mac Machines (Doesn't show up), All EFI PCs (Doesn't show up) and All Apple Silicon Machines (Too hard to code for).

Untested Machines: Mac Machines that are able to boot BIOS (Don't have any) and other machines.

Note: We are never going to support Apple Silicon as that is next to impossible to code for and none of us have a Silicon Machine. If you want an OS that runs on Silicon then just use macOS or even Asahi Linux. ~~This project is staying as a x86 x64 Intel and AMD supported project for now.~~

Another Note: We have plans to support ARM. We don't know when.
