//Minimum / Smallest number in array
#include <stdio.h>
void main(){
    int array[]={11,22,33,44,55,66,77,88,99,110};
    int min=array[0];
    for(int i=0;i<sizeof(array)/sizeof(array[0]);i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    printf("%d",min);
}