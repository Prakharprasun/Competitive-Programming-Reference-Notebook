#include "bits/stdc++.h"
using namespace std;
const long long M = 1e9 + 7;

int binpow(int a , int b){
    int ans = 1;
    while(b){
        if(b&1)ans = ((ans * a) % M);
        a = ((a*a)%M);
        b >>= 1;
    }
    return ans;
}

int main(){
    // Binary Exponentiation : 2^16 -> 2^8 * 2^8 -> 2^4 * 2^4 -> 2^2 * 2^2 -> 2*2
    cout << binpow(2,13) << " ";
    cout << pow(2,13);
    
}