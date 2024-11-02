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

int32_t main() {
    int t;
    cin >> t;
    while (t--){

        int n;
        cin >> n;
        int ans = 0;
        vector<int> a(n);
        map<int,int> m;
        for(auto &i : a){
            cin >> i;
        }
        int ma = -1;

        for(auto i : a){
            m[i]++;
        }
        for(auto i : m){
            ma = max(ma,i.s);
        }
        
        ans = (ceil(log2(ceil((double)n/ma))));
        //ans = ceil((n-ma)/ma);
        ans += (n-ma);

         cout << ans << '\n';
    } 
}

