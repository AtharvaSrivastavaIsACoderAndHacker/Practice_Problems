#include<iostream>
#include<set>
#include<algorithm>
#include<cmath>

using namespace std;

int main(int argc, char const *argv[]){
    
    int x;
    cin>>x;
    
    set<int> factors;
    
    for (int i = 1; i <= sqrt(x); i++){
        if(x%i==0){
            factors.insert(i);
            factors.insert(x/i);
        }
    }

    // Print vector
    for (auto i = factors.begin(); i != factors.end(); i++){
        cout<<*i<<endl;
    }

    if (x == 1) {
        cout << "1 is neither prime nor composite!" << endl;
    }
    else if (factors.size() == 2){
        cout << x << " is a Prime!" << endl;
    }
    
    return 0;
}