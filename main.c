#include "cprintf.h"
#include "stdio.h"

int main() {

    cprintf(red, "Hello World!\n");
    cprintf(green, "Hello World!\n");
    cprintf(blue, "Hello World!\n");
    printf("Hello World!\n");

    cprintf(red, "Hello Numbers: %d\n", 42);
    return 0;
}