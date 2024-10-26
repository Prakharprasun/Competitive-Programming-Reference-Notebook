#include "bits/stdc++.h"  
#define int long long
using namespace std;

#define f first
#define s second

int32_t main() {
    int t;
    cin >> t;
    while(t--){
        int x,k;
        cin >> x >> k;
        if(x%k!=0){
            cout << "1\n" << x << "\n";
        } else {
            cout << "2\n" << x-(1) << " " << 1 << "\n";
        }
    }
}

