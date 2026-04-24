//Display reverse array
#include <stdio.h>
void main(){
    int array[]={11,22,33,44,55,66,77,88,99,110};
    int size=sizeof(array)/sizeof(array[0]);
    int reverseArray[size];
    for(int i=0;i<size;i++){
        printf("%d\n",array[size-i-1]);
        reverseArray[i]=array[size-i-1];
    }
}