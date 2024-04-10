#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define ARRAY_SIZE 100

typedef struct huffman_t {
    uint64_t value;
    struct huffman_t *left;
    struct huffman_t *right;
} huffman_t;

huffman_t* huffman_init() {
    return NULL;
}


int main(void) {
    uint8_t* array = malloc(sizeof(uint8_t) * ARRAY_SIZE);

    if (array == NULL)
    {
        printf("malloc error\n");
        exit(0);
    }

    for (uint32_t i = 0; i < ARRAY_SIZE; i++) {
        printf("%u %u\n", i, array[i]);
    }
}
