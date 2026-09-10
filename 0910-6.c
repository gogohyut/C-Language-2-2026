#include <stdio.h>
void print_sum (int sum) {
    printf("%d\n", sum);
}
void add_2_number (int a, int b) {
    int sum = a + b;
    print_sum(sum);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    add_2_number(a, b);
    return 0;
}  
