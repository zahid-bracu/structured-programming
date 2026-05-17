/*
Write a C program to print numbers from 1 to 10.
Use if-else and continue to skip even numbers and print only odd numbers.
*/
#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}
