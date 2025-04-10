#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    
    int x;
    cin>>x;

    int count = 0;
    for (int i = 1; i <= abs(x); i*=10){count++;}
    if(x==0)count = 1;

    int divisor = 1;
    


    int armstrong = 0;
    for (int i = 0; i < count; i++){
        armstrong += ((x/divisor)%10)*((x/divisor)%10)*((x/divisor)%10);
        divisor*=10;
    }
    
    if (x==armstrong){
        cout<<x<<" is Armstrong !"<<endl;
    }
    else{
        cout<<x<<" is NOT Armstrong !"<<endl;
    }
    
    return 0;
}