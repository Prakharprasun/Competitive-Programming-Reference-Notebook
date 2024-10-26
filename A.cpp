#include "bits/stdc++.h"

#ifdef ONPC
#include "DEBUG.h"
#else
#define debug(...)
#endif

#define sz(a) ((int)((a).size()))
#define all(x) (x).begin(), (x).end()
 
using namespace std;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
 
#define int long long
#define double long double

void helper(vector<vector<int>> &ans, vector<int> &a, vector<int>& nums, int i) {
    if(i==sz(nums)){
        ans.push_back(a);
        return;
    }
    a.push_back(nums[i]);
    helper(ans,a,nums,i+1);
    a.pop_back();
    helper(ans,a,nums,i+1);
}

int solve() {
    int n;
    cin >> n;
    cout << n;
    return 0;
}
 
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int TET = 1e9;
    cin >> TET;
    for (int i = 1; i <= TET; i++) {
        if (solve()) {
            break;
        }
    }
    #ifdef ONPC
        cerr << endl << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
    #endif
}
