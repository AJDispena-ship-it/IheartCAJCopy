#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);


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
        array[i] = 100 + rand() % 101;
    }

    printf("Allocated space for 20 integers:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int sum = add(5,10);
    printf("The sum of 5 and 10 is : %d\n", sum);

    free(array);

    int y = 25;
    printf("The value of y is : %d\n", y);

    return 0;
}

int add(int a, int b) {
    return a + b;
}
