/*
Take input numbers until a negative number is entered and print the sum of positive numbers.

*/
#include <stdio.h>
int main() {
    int n, sum = 0;
    while (1) {
        scanf("%d", &n);
        if (n < 0)
            break;
        sum += n;
    }
    printf("Sum = %d", sum);
    return 0;
}
