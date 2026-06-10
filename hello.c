#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct person {
    char name[50];
    int age;
} Person;

int add(int a, int b);


int main(void)
{
    srand((unsigned)time(NULL));

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

    struct person sue;
     strncpy(sue.name, "Sue", sizeof(sue.name));
     sue.age = 20;
     sue.name[sizeof(sue.name) - 1] = '\0';
     printf("Person: %s is %d years old\n", sue.name, sue.age);

    free(array);


    int y = 25;
    printf("The value of y is : %d\n", y);

    return 0;
}

int add(int a, int b) {
    return a + b;
}
