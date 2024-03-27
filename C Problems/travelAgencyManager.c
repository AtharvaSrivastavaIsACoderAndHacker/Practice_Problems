#include<stdio.h>
#include<string.h>

struct driver{
    char name[45];
    char dlNo[14];
    char route[45];
    int kms;
};


int main(int argc, char const *argv[]){
    

    int noOfDriverData;
    printf("Enter the no. of drivers you want to store data for : ");
    scanf("%d",&noOfDriverData);

    while (getchar() != '\n'); // clear an irritating input buffer caused by the scanf() above !


    struct driver driverArray[noOfDriverData]; // creating array of structures !
    for (int i = 0; i < noOfDriverData; i++){
        struct driver d;
        driverArray[i] = d;
    }    

    
    
    for (int i = 0; i < noOfDriverData; i++){
        char namee[45];
        printf("Enter the name of the driver %d : ",i+1);
        gets(namee);
        strcpy(driverArray[i].name,namee);
    }
    for (int i = 0; i < noOfDriverData; i++){
        char dlno[45];
        printf("Enter the Dl No. of the driver %d : ",i+1);
        gets(dlno);
        strcpy(driverArray[i].dlNo,dlno);
    }
    for (int i = 0; i < noOfDriverData; i++){
        char route[45];
        printf("Enter the route of the driver %d : ",i+1);
        gets(route);
        strcpy(driverArray[i].route,route);
    }
    for (int i = 0; i < noOfDriverData; i++){
        int kms;
        printf("Enter the No. of Kms the driver %d : ",i+1);
        scanf("%d",&kms);
        driverArray[i].kms = kms;
    }
    
    return 0;
}