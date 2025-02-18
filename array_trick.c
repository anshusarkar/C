#include <stdio.h>
#include <stdint.h>

#ifndef UINT8_MAX
typedef unsigned char uint8_t;
#endif

int main() {
    uint8_t shift_LUT[] = {
        ['1'] = '!',
        ['2'] = '@',
        ['3'] = '#',
        ['4'] = '$',
        ['5'] = '%',
        ['6'] = '^',
        ['7'] = '&',
        ['8'] = '*', 
    };

    printf("Size of shift_LUT: %zu bytes\n", sizeof(shift_LUT));

    printf("shift_LUT['1']: %c\n", shift_LUT['1']);
    printf("shift_LUT['2']: %c\n", shift_LUT['2']);
    printf("shift_LUT['8']: %c\n", shift_LUT['8']);

    printf("shift_LUT['0']: %d (ASCII value)\n", shift_LUT['0']);
    printf("shift_LUT[10]: %d (ASCII value)\n", shift_LUT[10]);

    printf("\nIterating through digits:\n");
    for (int i = '0'; i <= '9'; i++) {
        printf("shift_LUT['%c']: %c (ASCII: %d)\n", i, shift_LUT[i], shift_LUT[i]);
    }

    return 0;
}
