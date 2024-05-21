/* 
SAMPLE FILE CONTENT

Thanks [[name]]
I will surely come to your city [[city]] soon !
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int j = 0;
int solutionToAllProblems = 0;
int main(int argc, char const *argv[]){
    
    char name[31];
    (void)printf("Enter The FileName (Not More Than 30 words !) : ");
    (void)scanf("%30s",&name);

    char n[51];
    (void)printf("Enter The Name (Not More Than 50 words !) : ");
    (void)scanf("%50s",&n);
    int nn;
    (void)printf("Enter The Len Of The Name You Entered : ");
    (void)scanf("%d",&nn);

    char c[51];
    (void)printf("Enter The City (Not More Than 50 words !) : ");
    (void)scanf("%50s",&c);
    int cc;
    (void)printf("Enter The Len Of The CityName You Entered : ");
    (void)scanf("%d",&cc);

    FILE* ptr = NULL;

    // This program replaces [[name]] and [[city]] in a given file ! --> modify code as per use ! Currently set to name and city only !


    ptr = fopen(name, "r");

    if (ptr == NULL) {
        perror("Error opening file");
    }

    fseek(ptr, 0L, SEEK_END);
    int lenOfFile = ftell(ptr);
    
    fclose(ptr);




    ptr = fopen(name, "r");

    char *contentOfFile = malloc(sizeof(char)*(lenOfFile+1));
    for (int i = 0; i < lenOfFile; i++){
        contentOfFile[i] = fgetc(ptr);
    }

    fclose(ptr);




    j = 0;
    int tempCond = 0;
    char *contentOfFileAFTERname = malloc(sizeof(char)*(lenOfFile+50));

    for (int i = 0; i < lenOfFile; i++){
        if ((contentOfFile[i] == 91) && (!tempCond)){

            tempCond = 1;                
            for (j = 0; j < nn; j++){
                contentOfFileAFTERname[i+j] = n[j];
                if (j+1 == nn){
                    solutionToAllProblems = 8;
                }
            }
        }
        contentOfFileAFTERname[i+j] = contentOfFile[i+solutionToAllProblems];     
    }   


    j = 0;
    solutionToAllProblems = 0;
    char *contentOfFileAFTERcity = malloc(sizeof(char)*(lenOfFile+50));
    for (int i = 0; i < lenOfFile; i++){
        if (contentOfFileAFTERname[i] == 91){

            for (j = 0; j < cc; j++){
                    contentOfFileAFTERcity[i+j] = c[j];
                if (j+1 == cc){
                    solutionToAllProblems = 7;
                }
            }
        }



        contentOfFileAFTERcity[i+j] = contentOfFileAFTERname[i+solutionToAllProblems];     
    }   


    ptr = fopen(name, "w");
    fprintf(ptr,contentOfFileAFTERcity);
    fclose(ptr);

    free(contentOfFile);
    free(contentOfFileAFTERname);
    free(contentOfFileAFTERcity);

    return 0;
}