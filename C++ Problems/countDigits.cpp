#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){

    int x;
    cin>>x;
    int count = 0;

    for (int i = 1; i <= abs(x); i*=10){
        count++;
    }
    if(x==0)count = 1;

    cout<<count<<endl;
    
    return 0;
}