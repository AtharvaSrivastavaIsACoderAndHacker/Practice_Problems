#include<stdio.h>
#include <string.h>

struct Candidate {
    int id;
    char name[35];
};


int main(int argc, char const *argv[]){
    
    // Arrays can also contain structures in it !!!!! PRACTICAL EXAMPLE With Array Of Structures : Storing Data Of 5 Candidates
    struct Candidate candidate3Array[5];
    
    for (int i = 0; i < 5; i++){
        struct Candidate c;
        candidate3Array[i] = c;
    } // now each block of the array has a structure of candidate initialized in it and can be accessed by arrayName and subscript variable !
    
    
    for (int i = 0; i < 5; i++){
        char name[35];
        printf("Enter the name of Candidate %d : ",i+1);
        gets(name);
        strcpy(candidate3Array[i].name,name);
    } // each structure of this array has been assigned a value to the name criteria !


    for (int i = 0; i < 5; i++){
        int id;
        printf("Enter the ID of Candidate %d : ",i+1);
        scanf("%d",&id);
        candidate3Array[i].id = id;
    } // similarly, we assigned values to the id criteria of the Candidate structure !

    // Now I have an array with data of 5 candidates !!!!! I can access it and use the data efficiently now 
    
    
    
    return 0;
}