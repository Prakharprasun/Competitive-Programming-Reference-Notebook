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
        vector<int> a;
        for(int i=1;i<=n;i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        int ans = -1;
        int min = *min_element(a.begin(),a.end());
        int ma = *max_element(a.begin(),a.end());
        ans = max(a[n-1]-min,ans);
        ans = max(ma-a[0],ans);
        vector<int> b(2*n);
        for(int i=0;i<2*n;i++){
            b[i] = a[i%n];
        }
        for(int i=0;i<n;i++){
            ans = max(ans, b[i+n-1] - b [i]);
        }
        cout << ans << '\n';
    } 
}

