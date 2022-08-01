#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Popcorn Kernel successfully loaded in 64-bit mode!\n");
    print_str("Popcorn Kernel is now able to link and run C files!\n");
    print_str("\n");
    print_str("\n");
    print_str("Welcome to the Popcorn Kernel!\n");
    print_str("Property of Paragon Softworks 2022\n");
}