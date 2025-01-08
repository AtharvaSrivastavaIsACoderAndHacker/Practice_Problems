#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int x, y;
public:
    Point(int xx, int yy){
        x = xx;
        y = yy;
    }
    friend double distanceBetweenPoints(Point a, Point b);
};

double distanceBetweenPoints(Point a, Point b){
    return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}


int main(int argc, char const *argv[]){
    
    Point a(1,1), b(2,2);
    cout<<distanceBetweenPoints(a, b)<<endl;
    
    return 0;
}