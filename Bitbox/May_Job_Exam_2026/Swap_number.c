#include <stdio.h>
void swap(int *m,int *n){
    int temp=*m;
    *m=*n;
    *n=temp;
}
int main(){
    int x=10;
    int y=20;
    swap(&x,&y);
    printf("x : %d\n",x);
    printf("y : %d",y);
    return 0;
}