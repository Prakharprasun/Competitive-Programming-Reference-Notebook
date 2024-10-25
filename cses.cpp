#include "bits/stdc++.h"  
#define int long long
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    if(min(a.first,a.second)==min(b.first,b.second)){
        return(max(a.first,a.second)<max(b.first,b.second));
    }
    return(min(a.first,a.second)<min(b.first,b.second));
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &i : a){
            cin >> i;
        }

        sort(a.begin(),a.end());

        int dp[n+1];
        memset(dp, 0 , sizeof(dp));

        for(int i = 0 ; i<n ; i++){
            if(i!=0)
            dp[i+1]= dp[i] + a[i]*(n-i)-a[i-1]*(n-i);
            else dp[i+1]= dp[i] + a[i]*(n-i);
        }

        
        for(int i = 0; i<n+1 ; i++){
            if(dp[i]>=k){
                cout << k + i -1 << '\n';
                break;
            }
        }
        
    }
}

