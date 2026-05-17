#include <stdio.h>
int main(){
    int n=10;
    int arr[n];
    int num=10;
    for(int i=0;i<n;i++){
        arr[i]=num;
        num=num+10;
    }
    int *p=arr;
    for(int i=0;i<n;i++){
        printf("Array Value : %d\n",*(p+i));
    }
    return 0;
}