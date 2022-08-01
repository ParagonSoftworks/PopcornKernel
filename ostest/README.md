# "ostest" Folders and Files Explained!

"buildenv" has a "Dockerfile" file that you can use to set up a Docker build environment.

"build" you can just ignore, I forgot to take that out.

"src" has the main source code. There will be another file like this in there.

"targets/x86_64" has important boot info. I suggest you don't mess with this unless you want a broken grub config.

"Makefile" is just the file that compiles all of it. I reccommend you also don't mess with this as you may break the compile process.

PS. the compile command is "make build-x86_64".
