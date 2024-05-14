#include<stdio.h>
#include<stdlib.h>

int power(int base,int power){ // --> made this function instead of using math.h bcoz pow() returns a double which gives error !
    if(power == 0){
        return 1;
    }
    int result = base;
    for (int i = 1; i < power; i++){
        result *= base;
    }    
    return result;
}





int main(int argc, char const *argv[]){

    int a;
    int noOfDigits;

    printf("Enter A Number to check whether it is Palindrome or not : ");
    scanf("%d",&a);
    printf("Enter the no. of digits in the no. you just entered above : ");
    scanf("%d",&noOfDigits);


    int* separatedDigits = malloc(noOfDigits*sizeof(int));

    noOfDigits -= 1;

    int originalNo = a;

    int counter = 0;
    for (int i = noOfDigits; i >= 0; i--){
        *(separatedDigits+counter) = a/(power(10,i));
        a = a % (power(10,i));
        ++counter;
    }
    
    int finalNo = 0;
    for (int i = noOfDigits; i >= 0; i--){
        finalNo += *(separatedDigits+i) * power(10,i);
    }

    if (originalNo == finalNo){
        printf("%d is a Palindrome Number !\n",originalNo);
    }
    else{
        printf("%d is a not Palindrome Number !\n",originalNo);
    }
    
    

    
    return 0;
}