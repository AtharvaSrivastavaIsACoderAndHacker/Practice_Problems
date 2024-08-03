#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char const *argv[]){

    if (!(argc>1)){
        (void)printf("Fatal : No Agruments Given !\n");
        return 0;
    }
    if (!(argc==4)){
        (void)printf("Fatal : Agruments Given Are Not Enough ! 3 Arguments To Be Given !\n");
        return 0;
    }

    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    if(strcmp(argv[1],"add") == 0){
        (void)printf("%d\n",num1 + num2);
    }
    if(strcmp(argv[1],"subtract") == 0){
        (void)printf("%d\n",num1 - num2);
    }
    if(strcmp(argv[1],"multiply") == 0){
        (void)printf("%d\n",num1 * num2);
    }
    if(strcmp(argv[1],"divide") == 0){
        (void)printf("%d\n",num1 / num2);
    }
    if(strcmp(argv[1],"mod") == 0){
        (void)printf("%d\n",num1 % num2);
    }
    
    return 0;
}