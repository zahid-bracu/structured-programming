#include <stdio.h>
int main(){
    int n=10;
    int arr[n];
    int num=10;
    for(int i=0;i<n;i++){
        arr[i]=num;
        printf("Array value : %d\n",arr[i]);
        num=num+10;
    }
    int *p=arr;
    int sum=0;
    for(int i=0;i<n;i++){
        printf("value : %d\n",*(p+i));
        sum=sum+*(p+i);
    }
    printf("Sum : %d\n",sum);
}