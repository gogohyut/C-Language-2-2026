#include <stdio.h>
#include <string.h>
#define N 6

int main(void)
{
    char a[] = "Hello";
    char b[N];

    strcpy(b, a);

    printf("b[] = %s\n", b);

    return 0;
}
