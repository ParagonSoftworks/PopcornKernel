// and here is the point where I barely know anything
// yup, welcome to C.
#include "print.h"

// start variable
void kernel_main() {
    // a bunch of commands that work only if you didn't
    // screw up your print.c and .h file placement
    // because visual studio code and make hate me
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    // a nice little loaded message which thanks to the code being fast 
    // cause it's assembly and this is already compiled runs instantly
    print_str("Popcorn Kernel successfully loaded in 64-bit mode!\n");
    print_str("Popcorn Kernel is now able to link and run C files!\n");
    print_str("\n");
    print_str("\n");
    print_str("Welcome to the Popcorn Kernel!\n");
    // gotta get that copyright doe
    print_str("Property of Paragon Softworks 2022\n");
}
