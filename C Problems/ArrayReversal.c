#include<stdio.h>

int main(int argc, char const *argv[]){
    

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int sizeOfArr = sizeof(arr) / sizeof(arr[0]);
    int arrReversed[sizeOfArr];

    int j = 0;
    for (int i = sizeOfArr; i > 0; i--){
        arrReversed[j] = arr[i-1];    
        ++j;
    }



    for (int a = 0; a < sizeOfArr; a++){
        printf("%d ",arr[a]);
    }
    printf("\n");
    for (int b = 0; b < sizeOfArr; b++){
        printf("%d ",arrReversed[b]);
    }
    
        
    
    
    return 0;
}