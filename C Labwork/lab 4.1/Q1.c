#include <stdio.h>

int main() {
    int x, y, ans;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    ans = (x * x) + (2 * x * y) + (y * y);
    printf("The result of (x + y)^2 is: %d\n", ans);
}