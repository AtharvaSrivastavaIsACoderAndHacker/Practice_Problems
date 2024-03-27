// This program takes an HTML tag, and parses it to get and print the contents of the heading and remove preceeding or succeeding spaces
#include<stdio.h>
#include<string.h>
void parseAndPrint(char arr[]){
    char* ptrr = strchr(arr,'>');
    for (int i = 0; i < 20; i++){
        arr[i] = ' ';
        if (&arr[i] == ptrr){
            break;
        }
    }
    char* ptr = strchr(arr,'<');

    char newArr[100];
    int j = 0;
    int Condition = 1;
    char* newPtr;
    for (int i = 0; i < 100; i++){
        if (arr[i]== ' ' && Condition==1)
            continue;
        Condition = 0;
        if ( ((int)&arr[i]) == (int)ptr ){
            newArr[j] = '\0';
            break;
        }
        newArr[j] = arr[i];
        ++j;
    }

    puts(newArr);
}


int main(int argc, char const *argv[]){
    char h1[100];
    fgets(h1, sizeof(h1), stdin);
    parseAndPrint(h1);
    return 0;
}