#include "bits/stdc++.h"  
#define int long long
using namespace std;

const int MOD = 1e9 + 7;

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> prefix_sum_map;
        int prefix_sum = 0;
        int segment_count = 0;
        prefix_sum_map[0] = 1;
        for (auto &i : a) {
            cin >> i;
            prefix_sum += i;
            if (prefix_sum_map[prefix_sum] > 0) {
                segment_count++;
                prefix_sum_map.clear();
                prefix_sum_map[0] = 1;
                prefix_sum = 0;
            }
            prefix_sum_map[prefix_sum]++;
        }
        cout << segment_count << '\n';
    }
}
