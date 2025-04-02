#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){

    int x, n;
    cin>>x>>n;
    int divisor = 1;
    for(int i = 1; i < n; i++){divisor*=10;} // doing manually coz pow() is shit ! divisor is 10^(n-1)

    cout<<"========================================================================================================================"<<endl;
    
    for (int i = 0; i < n; i++){
        cout<<(x/divisor)%10<<endl;
        divisor/=10;
    }
   
    return 0;
}