#include <stdio.h>

int main() {
    int n, i, count = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d divisible by 3 but not by 5:\n", n);
    for (i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal count = %d\n", count);

    return 0;
}
