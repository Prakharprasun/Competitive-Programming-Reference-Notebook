#include "bits/stdc++.h" 
using namespace std;

#define int long long

void solve() {
    int p = 0;
    int n=0;
    cin >> n;
    while(n--){
        char a; int b;
        cin >> a >> b;
        if(a=='P') p+=b;
        else{
            if(p<b){
                cout << "YES\n";
                p=0;
            } else {
                cout << "NO\n";
                p-=b;
            }
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    while(t--) solve();
    return 0;
}

