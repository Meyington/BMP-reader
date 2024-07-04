#include "bmp.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <bmp_file>\n", argv[0]);
        return 1;
    }

    print_bmp_headers(argv[1]);

    return 0;
}
