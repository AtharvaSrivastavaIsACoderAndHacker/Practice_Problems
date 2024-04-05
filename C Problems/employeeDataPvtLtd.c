#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
    
    // USING DYNAMIC MEMORY ALLOCATION  
    // Input a variable that stores integer len of the employee id, and then the id itself, which can be of any length !
    // For n employees do the same and print their ids on screen !

    // NOTE : When Blanks Are Shown with nothing but a cursor(during runtime) enter a random character and press enter to continue the program !

    int n;
    printf("Enter The No. Of Employees You Want To Store Data For : ");
    scanf("%d\n",&n);
    int pointersToEmployeeIdAddresses[n];
    int a;

    while (getchar() != '\n'); // clear an irritating input buffer caused by the scanf() above !

    for (int i = 0; i < n; i++){
        printf("Enter The Length Of Employee %d's id : ",i+1);
        scanf("%d\n",&a);

        while (getchar() != '\n'); // clear an irritating input buffer caused by the scanf() above !

        int* ptr = malloc(a+1);
        printf("Enter The EmployeeID Of Employee %d : ",i+1);
        gets(ptr[0]); 
        pointersToEmployeeIdAddresses[i] = ptr;
    }

    for (int i = 0; i < n; i++){
        int* ptr = pointersToEmployeeIdAddresses[i];
        puts(ptr);
    }
        
    
    return 0;
}