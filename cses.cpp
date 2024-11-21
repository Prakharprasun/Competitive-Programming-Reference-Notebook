/* 
 * * Author : Prakhar Prasun 
 */

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
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--){
       int n;
       cin >> n;
       vector<int> a(n);
       for(auto &i : a){
           cin >> i;
       }
        
       int curr = 0;
       int maxcurr = 0;

       int c = 0;
       for(int i=0; i<n ; i++){
            curr += (a[i]>curr)? 1 : -1;
            maxcurr = max(curr,maxcurr);

            if(a[i]<maxcurr){
                c++;
            }
       }
        

       int k = 0;
       int maxk = 0;
       curr =0;
       maxcurr = 0;
       int ans = 0;
       int start = 0;

       for(int i=0; i<n ; i++){
            if(curr<a[i]){
                curr++;
            } else if(curr > a[i]){
                curr--;
            }
            maxcurr = max(curr,maxcurr);

            if(maxcurr > a[i]){
                k++;
            } else {
                if(k>=maxk){
                    start = i;
                    maxk = k;
                    ans = maxcurr;
                }
                k = 0;
            }
       }

       for(int i = start ; i<n ; i++){
            if(ans<a[i]){
                ans++;
            } else if(ans > a[i]){
                ans--;
            }

       }

       if(c == 0){
           maxcurr--;
           ans = maxcurr;
       }

       cout << ans << '\n';
    } 
}

/* From : https://codeforces.com/submissions/Benq
 * stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */
