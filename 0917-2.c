#include <stdio.h>
#define N 10

int main(void) 
{
    int a[N];
    int b[N][N];    
    printf("sizeof(a[N]) : %d\n", sizeof(a[N]));
    printf("sizeof(a) : %d\n", sizeof(a));
    printf("sizeof(b[N][N]) : %d\n", sizeof(b[N][N]));
    printf("sizeof(b[N]) : %d\n", sizeof(b[N]));
    printf("sizeof(b) : %d\n", sizeof(b));
    return 0;
}
