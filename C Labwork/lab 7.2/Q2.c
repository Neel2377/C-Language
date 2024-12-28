#include <stdio.h>

int main() {
    int k = 5;
    for (int i = k; i >= 1; i--) {
        for (int j = 1; j < i; j++) {
            printf("  ");
        }
        for (int j = i; j <= k; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}