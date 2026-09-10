#include <stdio.h>
int max(int a, int b) {
    if(a > b) {
        return a;
    } else {
        return b;
    }
}
int main(void) {
    int num1, num2;
    int result;
    scanf("%d %d", &num1, &num2);
    result = max(num1, num2);
    printf("%d\n", result); 
    return 0;
}
