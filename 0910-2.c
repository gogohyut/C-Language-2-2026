#include <stdio.h>
int get_input(void) {
    int num;
    scanf("%d", &num);
    return num;
}
int main() {
    int n = get_input();
    int m = get_input();
    printf("%d\n", n + m);
    return 0;
}
