/*
 * Author : Prakhar Prasun
 */

#include "bits/stdc++.h"
using namespace std;

// Debugging macro
#ifdef ONPC
#include "DEBUG.h"
#else
#define debug(...)  // No-op for production
#endif

// Type aliases
#define int long long
#define double long double
#define vi vector<int>

// Pair utilities
#define mp make_pair
#define f first
#define s second

// Macros for common operations
#define all(x) begin(x), end(x)
#define sor(x) sort(all(x))
#define pb push_back
#define eb emplace_back
#define vma(a) *max_element(a.begin(),a.end());
#define vmi(a) *min_element(a.begin(),a.end());

// Print
#define print(...) (cout << (__VA_ARGS__) << ' ')
#define println(...) (cout << (__VA_ARGS__) << '\n')

// Loops
#define range(i, a, b) for (int i = (a); i < (b); ++i)
#define frange(i, n) range(i, 0, n)
#define rrange(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define rfrange(i, n) rrange(i, 0, n)
#define each(a, x) for (auto &a : x)

// Constants
const int MOD = 998244353;  // Modular arithmetic
const int MX = 2e5 + 5;     // Max array size
const int INF = 1e18;       // Infinity
const double PI = acos(-1.0);
const int dx[4] = {1, 0, -1, 0};  // Grid movement
const int dy[4] = {0, 1, 0, -1};

// Random number generator
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());

// Utilities for bitwise operations
constexpr int pct(int x) { return __builtin_popcountll(x); }  // Count bits set
constexpr int bits(int x) { return x == 0 ? 0 : 63 - __builtin_clzll(x); } // Log2
constexpr int p2(int x) { return 1LL << x; }  // 2^x
constexpr int msk2(int x) { return p2(x) - 1; }  // Mask with x bits set

// Math utilities
int cdiv(int a, int b) { return a / b + ((a ^ b) > 0 && a % b); }  // Ceil division
int fdiv(int a, int b) { return a / b - ((a ^ b) < 0 && a % b); }  // Floor division

// Helper functions
template <class T>
bool ckmin(T& a, const T& b) { return b < a ? a = b, true : false; }  // Minimize
template <class T>
bool ckmax(T& a, const T& b) { return a < b ? a = b, true : false; }  // Maximize

template <class T, class U>
T fstTrue(T lo, T hi, U f) {  // First true in range
    ++hi;
    assert(lo <= hi);
    while (lo < hi) {
        T mid = lo + (hi - lo) / 2;
        f(mid) ? hi = mid : lo = mid + 1;
    }
    return lo;
}

template <class T, class U>
T lstTrue(T lo, T hi, U f) {  // Last true in range
    --lo;
    assert(lo <= hi);
    while (lo < hi) {
        T mid = lo + (hi - lo + 1) / 2;
        f(mid) ? lo = mid : hi = mid - 1;
    }
    return lo;
}

template <class T>
void remDup(vector<T>& v) {  // Sort and remove duplicates
    sor(v);
    v.erase(unique(all(v)), end(v));
}

template <class T, class U>
void safeErase(T& container, const U& value) {  // Safe erase for containers
    auto it = container.find(value);
    assert(it != end(container));
    container.erase(it);
}

// Problem-solving function
void Solve() {
    int n, m, l1;
    cin >> n >> m >> l1;

    vector<pair<int, int>> hurdles(n);
    each(i,hurdles) cin >> i.f >> i.s;

    vector<pair<int, int>> powerups(m);
    each(i,powerups) cin >>  i.f >> i.s;

    sor(hurdles);
    sor(powerups);

    int curr= 1;
    int powerups_used = 0;

    priority_queue<int> pq;

    int idx = 0;  
    for (const auto &hurdle : hurdles) {
        int l = hurdle.f, r = hurdle.s;

        while (idx < m && powerups[idx].f <= l) {
            pq.push(powerups[idx].s);
            idx++;
        }

        while (curr<= r-l+1) {
            if (pq.empty()) {
                println(-1);
                return;
            }
            curr += pq.top();
            pq.pop();
            powerups_used++;
        }

        if (curr<= r-l+1) {
            if (pq.empty()) {
                println(-1);
                return;
            }
            curr += pq.top();
            pq.pop();
            powerups_used++;
        }
    }

    println(powerups_used);
}

// Main function
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1; 
    cin >> t;
    while (t--) Solve();
}

/*
 * - Check for integer overflow and array bounds
 * - Handle special cases (e.g., n = 1, empty input)
 * - Stay organized and write intermediate results down
 * - Avoid sticking to one approach for too long
 * - Use debugging effectively to locate errors
 */

