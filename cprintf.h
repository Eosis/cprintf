#ifndef CPRINTF_H
#define CPRINTF_H

#include "stdio.h"

#define COLOR_START_ "\x1b"
#define RED_  COLOR_START_ "[1;31m"
#define BLUE_ COLOR_START_ "[1;34m"
#define GREEN_ COLOR_START_ "[1;32m"
#define RESET_ COLOR_START_ "[0m"

#define red RED_
#define blue BLUE_
#define green GREEN_

#define cprintf(color, format, ...) printf(color format RESET_, ##__VA_ARGS__);

#endif
