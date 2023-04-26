#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
#include <string.h>

char *_strncat(char *dest, char *src, int n)
{
    return strncat(dest, src, n);
}
