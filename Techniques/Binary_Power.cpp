#include "bits/stdc++.h"  
#define int long long
using namespace std;
 
int MOD = 1e9 + 7;
 
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
 
int32_t main(){
    int n;
    cin >> n;
    int ans = binpow(2,n,MOD);
    cout << ans;
}