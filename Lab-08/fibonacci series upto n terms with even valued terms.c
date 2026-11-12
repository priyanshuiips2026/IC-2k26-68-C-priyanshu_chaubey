#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, nextTerm;
    int evenSum = 0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("Fibonacci Series:");
    for (i = 1; i <= n; i++) {
        printf("%d \n", t1);
        if (t1 % 2 == 0) {
            evenSum = evenSum + t1;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
 printf("\nSum of even-valued terms = %d\n", evenSum);

    return 0;
}
