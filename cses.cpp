#include "bits/stdc++.h"  
#define int long int long
#define double long double
using namespace std;

#define f first
#define s second

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(auto &i : a){
            cin >> i;
        }
        int ans = 0;
        for(int i = 1; i<n ; i++){
            if((a[i-1]%2)==(a[i]%2)){
                ans++;
            }
        }
        cout << ans << '\n';
    }
}

