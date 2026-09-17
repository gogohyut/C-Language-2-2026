#include <stdio.h>

int main(void)
{
    int key, i, SIZE;

    printf("Input the size of the array: ");
    for (i = 0; i < 1; i++) {
        scanf("%d", &SIZE);
    }

    int list[SIZE];
    
    printf("Input %d numbers: ", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &list[i]);
    }
    printf("Array values: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d", list[i]);
    }
    printf("\n");
    printf("Input a key value : ");
    scanf("%d", &key);
    for (i = 0; i < SIZE; i++) {
        if (list[i] == key) {
            printf("Find the key at %d of array\n", i + 1);
        }
    }

    printf("End\n");
    return 0;
}
