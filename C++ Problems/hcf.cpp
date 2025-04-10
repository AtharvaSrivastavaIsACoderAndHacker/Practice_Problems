// #include<iostream>
// #include<set>
// #include<cmath>
// #include<algorithm>

// using namespace std;

// set<int> listFactors(int x){
//     set<int> factors;
    
//     for (int i = 1; i <= sqrt(x); i++){
//         if(x%i==0){
//             factors.insert(i);
//             factors.insert(x/i);
//         }
//     }
//     return factors;
// }

// int main(int argc, char const *argv[]){
    
//     int x, y;
//     cin>>x>>y;

//     set<int> xx = listFactors(x);
//     set<int> yy = listFactors(y);

//     int hcf = 0;
//     for(auto var : xx){
//         if(yy.find(var) != yy.end()){hcf = var;}
//     }

//     cout<<hcf<<endl;
    
    
//     return 0;
// }




// =========================================================================================================================================


// ALTERNATE METHOD

#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    
    int x,y;
    cin>>x>>y;
    
    int hcf;
    for (int i = 1; i <= min(x,y); i++){
        if(x%i == 0 && y%i == 0) hcf = i;
    }
    cout<<hcf<<endl;
    
    return 0;
}