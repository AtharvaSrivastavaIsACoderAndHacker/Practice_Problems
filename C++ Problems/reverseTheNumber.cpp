#include<iostream>
#include<cmath>

using namespace std;

int main(int argc, char const *argv[]){

    int x;
    cin>>x;
    int count = log10(abs(x)) + 1;
    int temp = 1;
    int tempp = 1;
    for(int i = 1; i < count; i++){tempp*=10;}

    int reverseNumber = 0;

    for (int i = 0; i < count; i++){
        reverseNumber += ((x/temp)%10)*tempp;
        temp*=10;
        tempp/=10;
    }

    cout<<reverseNumber<<endl;

    return 0;
} 