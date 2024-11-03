#include "bits/stdc++.h" 

#ifdef ONPC
#include "DEBUG.h"
#else
#define debug(...)
#endif

#define int long long
#define double long double
using namespace std;

#define f first
#define s second

int32_t main(){

    int n,k,q;
    cin >> n >> k >> q;

    vector<vector<int>> a(n, vector<int> (k));

    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j<k ; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1 ; i < n ; i++) {
        for(int j = 0 ; j<k ; j++){
            a[i][j] = a[i][j] | a[i-1][j];
        }
    }

    debug(a);

    while(q--){
        int t;
        cin >> t;
        while(t--){
            int x,z;char y;
            cin >> x >> y >> z;
        }
    }
}
