#include <stdio.h>
#define N 6
void copy_array(char a[]);
int main(void)
{
char a[] = "Hello";
int i;
copy_array(a);
return 0;
}
void copy_array(char a[])
{
    char b[N];
    int i;
    for (int i = 0; i < N; i++) {
        b[i] = a[i];
    }
    printf("b[] = %s\n", b);
}
