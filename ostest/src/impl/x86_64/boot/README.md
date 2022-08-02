# "boot" Files and Folders Explained!

"header.asm" is the maaagic file that allows the multiboot2 command to even boot the kernel.

"main.asm" is the file that contains the 32-bit version of the kernel.

"main64.asm" is the file that is eventually loaded in later after confirming it can switch to 64-bit.

Fun fact: in previous versions (which I sent to my friend on Discord
so I still have a backup of) instead of the Popcorn Kernel Text 
that we have in 0.1 it used to just say OK with green text.

Or if it didn't work ERR: X with red.
