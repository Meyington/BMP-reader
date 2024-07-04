#include "bmp.h"
#include <stdio.h>

void print_bmp_headers(const char *filename)
{
    FILE *file = fopen(filename, "rb");
    if (!file)
    {
        perror("Error opening file");
        return;
    }

    bmp_file_header_t file_header;
    bmp_info_header_t info_header;

    fread(&file_header, sizeof(bmp_file_header_t), 1, file);
    fread(&info_header, sizeof(bmp_info_header_t), 1, file);

    fclose(file);

    printf("Width         : %d\n", info_header.width);
    printf("Height        : %d\n", info_header.height);
    printf("Planes        : %d\n", info_header.planes);
    printf("Bits/pixel    : %d\n", info_header.bit_count);

    switch (info_header.compression)
    {
    case 0:
        printf("Compression   : none\n");
        break;
    case 3:
        printf("Compression   : BI_BITFIELDS\n");
        break;
    case 4:
        printf("Compression   : BI_JPEG\n");
        break;
    case 5:
        printf("Compression   : BI_PNG\n");
        break;
    default:
        printf("Compression   : Unknown\n");
        break;
    }

    printf("Image Size    : %d\n", info_header.size_image);
    printf("Pixels/meter  : %dx%d\n", info_header.x_pels_permeter, info_header.y_pels_permeter);
}
