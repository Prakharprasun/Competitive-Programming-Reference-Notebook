#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
const int N = 1e5 + 10;

long long fact[N];
void precomputation(){
    fact[0] = fact [1] = 1;
    for(int i=2;i<N;i++){
        fact[i] = (fact[i-1] * i) % M;
    }
}

int main() {
    int t = N;
    precomputation();
    while(t--){
        cout << fact[t] << "\n";
    }
}
