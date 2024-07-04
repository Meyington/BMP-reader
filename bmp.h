#include <stdint.h>

typedef struct __attribute__((packed))
{
    uint16_t type;
    uint32_t size;
    uint16_t reserved1;
    uint16_t reserved2;
    uint32_t off_bits;
} bmp_file_header_t;

typedef struct
{
    uint32_t size;
    int32_t width;
    int32_t height;
    uint16_t planes;
    uint16_t bit_count;
    uint32_t compression;
    uint32_t size_image;
    int32_t x_pels_permeter;
    int32_t y_pels_permeter;
} bmp_info_header_t;

void print_bmp_headers(const char *filename);
