// By : Prakhar Prasun , From : https://codeforces.com/contest/2033/problem/C

#include "bits/stdc++.h"  
#define int long long
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a) {
            cin >> i;
        }
        if(n==2){
            if(a[0]!=a[1]){
                cout << "0\n";
            } else {
                cout << "1\n";
            }
            continue;
        }
        int dp[n][2];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i < n; i++){
            // 1 -> swap , 0 -> no swap
            dp[i][0] =
        min(dp[i - 1][0] + (a[i] == a[i - 1]) + (a[n - i - 1] == a[n - i]),
            dp[i - 1][1] + (a[i] == a[n - i]) + (a[n - i - 1] == a[i - 1]));
 
    dp[i][1] =
        min(dp[i - 1][0] + (a[i] == a[n - i]) + (a[n - i - 1] == a[i - 1]),
            dp[i - 1][1] + (a[i] == a[i - 1]) + (a[n - i - 1] == a[n - i]));        
        }
        cout << (min(dp[n-1][1],dp[n-1][0])/2) << "\n";
    }
}