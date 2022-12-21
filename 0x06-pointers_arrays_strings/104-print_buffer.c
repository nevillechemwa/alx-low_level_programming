#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print bufer
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void print_buffer(char *b, int size) {
    int i, j;

    for (i = 0; i < size; i += 10) {
        printf("%08x: ", i);
        for (j = i; j < i + 10; j++) {
            if (j < size) {
                printf("%02x ", b[j]);
            } else {
                printf("   ");
            }
        }
        printf(" ");
        for (j = i; j < i + 10; j++) {
            if (j < size) {
                if (isprint(b[j])) {
                    putchar(b[j]);
                } else {
                    putchar('.');
                }
            }
        }
        putchar('\n');
    }
}

