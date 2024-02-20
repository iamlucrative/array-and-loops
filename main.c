#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int a[MAX];
int rand_seed = 10;

int rand_seed_function() {
    rand_seed = rand_seed * 1103515245 + 12345;
    return (unsigned int)(rand_seed / 65536) % 32768;
}

void bubble_sort() {
    int i, t, x, y;
    for (x = 0; x < MAX - 1; x++) {
        for (y = 0; y < MAX - x - 1; y++) {
            if (a[y] > a[y + 1]) {
                t = a[y];
                a[y] = a[y + 1];
                a[y + 1] = t;
            }
        }
    }
}

int main(void) {
    int i;

    // Initialize array with random values
    for (i = 0; i < MAX; i++) {
        a[i] = rand_seed_function();
        printf("%d\n", a[i]);
    }

    // Sort the array
    bubble_sort();

    printf("------------\n");

    // Print sorted array
    for (i = 0; i < MAX; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
