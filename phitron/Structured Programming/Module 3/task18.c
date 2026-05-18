/*
Write a C program using do-while loop to print numbers from 1 to 10.
*/
#include <stdio.h>
int main() {
    int i=1;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=10);
    return 0;
}