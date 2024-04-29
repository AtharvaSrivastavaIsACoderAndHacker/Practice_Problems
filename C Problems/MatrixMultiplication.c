#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
    
    int rowA, columnA, rowB, columnB;

    printf("Enter the no. of rows in your matrix A : \n");
    scanf("%d",&rowA);
    printf("Enter the no. of columns in your matrix A : \n");
    scanf("%d",&columnA);
    printf("Enter the no. of rows in your matrix B : \n");
    scanf("%d",&rowB);
    printf("Enter the no. of columns in your matrix B : \n");
    scanf("%d",&columnB);

    if (!(columnA == rowB)){
        printf("Sorry, cannot multiply your matrix ! They are of different dimensions !\n");
        return 0;
    }



    int* ptrA = malloc((rowA * columnA) * sizeof(int));
    int* ptrB = malloc((rowB * columnB) * sizeof(int));


    printf("Start Entering Ints In The Matrix A 1by1 in correct order !\n");
    for (int i = 0; i < rowA*columnA; i++){
        int aa = 0;
        scanf("%d",&aa);
        ptrA[i] = aa;
    }
 
    printf("Start Entering Ints In The Matrix b 1by1 in correct order !\n");
    for (int i = 0; i < rowA*columnA; i++){
        int bb = 0;
        scanf("%d", &bb);
        ptrB[i] = bb;
    }


 

    int* ptrResult = malloc((rowB * columnB) * sizeof(int));

    for (int i = 0; i < rowA; i++){
            for (int j = 0; j < columnB; j++){
                ptrResult[i * columnB + j] = 0;
                for (int k = 0; k < columnA; k++){
                    ptrResult[i * columnA + j] += (ptrA[i * columnA + k])*(ptrB[k * columnB + j]);                                            
                }            
            }
        }


    for (int i = 0; i < rowA; i++){
        for (int j = 0; j < columnA; j++){
            printf("%d ", ptrResult[i * columnA + j]);
        }
        printf("\n");
    }

 

    free(ptrA);
    free(ptrB);
    free(ptrResult);
    
    return 0;
}