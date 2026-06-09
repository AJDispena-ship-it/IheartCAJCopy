#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Hello, world!\n");
    printf("C program for AP CSA class\n");

    int x = 10;
    printf("The value of x is : %d\n", x);

    int *array = malloc(20 * sizeof(int));
    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 20; i++) {
        array[i] = i + 1;
    }

    printf("Allocated space for 20 integers:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    
    return 0;
}
