//Swap two variables without third variable
#include <stdio.h>
int main() {
    int x=10;
    int y=20;
    printf("X : %d & Y : %d \n",x,y);
x=x+y;
y=x-y;
x=x-y;
    printf("X : %d & Y : %d \n",x,y);
    return 0;
}