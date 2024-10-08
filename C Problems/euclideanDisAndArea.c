#include<stdio.h>
#include<math.h>

float euclideanDistance(int x1, int x2, int y1, int y2){
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

float areaOfCircle(int x1, int x2, int y1, int y2, float (*fPtr)(int,int,int,int)){
    float radius = fPtr(x1,x2,y1,y2);
    return 3.14159265359*radius*radius;
}

int main(int argc, char const *argv[]){
    
    // take x1,y1 and x2,y2 using scanf !
    // calculate euclidean distance between the two points !
    // taking the calculated distance as rad, find out the area of a circle withh radius as rad !
    
    int x1,x2,y1,y2; // inuts and all !
    scanf("%d",&x1);
    scanf("%d",&x2);
    scanf("%d",&y1);
    scanf("%d",&y2);

    float (*euDisPtr) (int, int, int, int) = euclideanDistance; // initialising a functionPointer to pass it to areaOfCircle() !
    float area = areaOfCircle(x1,x2,y1,y2,euDisPtr);
    (void)printf("%f\n",area);
    
    return 0;
}