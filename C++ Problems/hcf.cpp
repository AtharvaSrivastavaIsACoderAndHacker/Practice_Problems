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

// #include<iostream>

// using namespace std;

// int main(int argc, char const *argv[]){
    
//     int x,y;
//     cin>>x>>y;
    
//     int hcf;
//     for (int i = 1; i <= min(x,y); i++){
//         if(x%i == 0 && y%i == 0) hcf = i;
//     }
//     cout<<hcf<<endl;
    
//     return 0;
// }



// =========================================================================================================================================

// Euclidean Algorithm (Subtraction Version) For GCF

// it states that gcf(a,b) == gcf(a-b, b) provided that a is the greater number among the two !

// #include<iostream>

// using namespace std;

// int main(int argc, char const *argv[]){
    
//     int x,y;
//     cin>>x>>y;
    
//     int num1=x, num2=y;

//     int hcf = 0;
    
//     while(num1 != 0 && num2 != 0){
//         (num1>num2)?(num1=num1-num2):(num2=num2-num1);
//     }
//     if(num1==0)hcf = num2;
//     else if(num2==0)hcf = num1;
//     cout<<hcf<<endl;
    
//     return 0;
// }


// ==========================================================================================================================================

// EUCLIDEAN MODULUS METHOD FOR GCD (FASTEST)

// any number that divides both a and b also divides a % b.
// GCD(a,b)=GCD(b,amodb) --> (where a>b)

// #include<iostream>

// using namespace std;

// int main(int argc, char const *argv[]){
    
//     int x,y;
//     cin>>x>>y;
    
//     int num1=x, num2=y;

//     int hcf = 0;
    
//     while (num2 != 0) {
//         int temp = num2;
//         num2 = num1 % num2;
//         num1 = temp;
//     }
//     if(num1==0)hcf = num2;
//     else if(num2==0)hcf = num1;
//     cout<<hcf<<endl;

//     return 0;
// }



// ==========================================================================================================================================


// STEIN'S ALGORITHM --> best for embedded and lowlevel systems for prime fastness and accuracy

    /*
        ===========================
        Binary GCD Algorithm
        (Stein's Algorithm)
        ===========================

        Concept:
        --------
        - Traditional GCD uses division and modulus.
        - Binary GCD avoids division:
        -> Uses only bitwise operations and subtraction.
        -> Faster for hardware and performance-critical software.

        Principles:
        -----------
        1. If both numbers are even:
        GCD(a, b) = 2 * GCD(a/2, b/2)
        2. If one is even, one is odd:
        GCD(a, b) = GCD(a/2, b) or GCD(a, b/2)
        3. If both are odd:
        GCD(a, b) = GCD(|a - b| / 2, min(a, b))

        Steps:
        ------
        - Count common factors of 2 (using bit shifts).
        - Remove all factors of 2 from a and b.
        - Iteratively subtract the smaller from the larger, divide result by 2.
        - When one number becomes zero, the other is the GCD.
        - Multiply back the common powers of 2.

        Performance:
        ------------
        - Time Complexity: O(log(max(a, b)))
        - Operations: Bit-shifts, subtraction — NO division/modulo.
        - Hardware-friendly and used in cryptography & embedded systems.

        ===========================
    */

#include <iostream>
using namespace std;

int binaryGCD(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    
    // Count the number of common factors of 2
    int commonFactorOfTwo = 0;
    while (((a | b) & 1) == 0) { // both even
        a >>= 1;
        b >>= 1;
        commonFactorOfTwo++;
    }
    
    // Remove all factors of 2 from 'a'
    while ((a & 1) == 0) a >>= 1;

    // Main loop
    while (b != 0) {
        // Remove all factors of 2 from 'b'
        while ((b & 1) == 0) b >>= 1;

        // Ensure a <= b, swap if necessary
        if (a > b) std::swap(a, b);

        b = b - a;
    }

    // Multiply by the common factors of 2
    return a << commonFactorOfTwo;
}

int main() {
    int a,b;
    cin>>a>>b;
    cout << binaryGCD(a, b) << endl;
    return 0;
}
