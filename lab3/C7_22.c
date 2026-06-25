// 22. WAP to print Pascal triangle.

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num = 1;

        // Print spaces for alignment
        for (int s = 0; s < n - i - 1; s++) {
            printf("  ");
        }

        // Print numbers
        for (int j = 0; j <= i; j++) {
            printf("%4d", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}