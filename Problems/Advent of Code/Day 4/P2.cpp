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

// Scan/Input
template <typename T>
void scan(T& arg) {
    cin >> arg;
}
template <typename T, typename... Args>
void scan(T& arg, Args&... args) {
    cin >> arg;
    scan(args...); // Recursive call
}

// Print
void println() {
    cout << '\n'; // Simply prints a newline
}
template <typename T>
void println(T arg) {
    cout << arg << '\n'; // Print the last argument with a newline
}
template <typename T, typename... Args>
void println(T arg, Args... args) {
    cout << arg << " ";  // Print the first argument followed by a space
    println(args...);    // Recursive call for the rest
}
template <typename T>
void print(T arg) {
    cout << arg; // Print the last argument without a trailing space or newline
}
template <typename T, typename... Args>
void print(T arg, Args... args) {
    cout << arg << " ";  // Print the first argument followed by a space
    print(args...);      // Recursive call for the rest
}

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

void Solve() {
    vector<string> data;
    string line;
    while (getline(cin, line)) {
        data.pb(line);
    }

    unsigned long long ans = 0;

    int n = data.size();

    frange(row,n){
        frange(col,n){
            // (x-1,y-1) (x+1,y-1)
            // (x-1,y+1) (x+1,y+1)
            if(data[row][col] != 'A') continue;
            int x[2] = {row + 1 , row - 1};
            int y[2] = {col + 1 , col - 1};

            if(row-1 < 0 || col -1 < 0) continue;
            if(row+1 > n-1 || col + 1 > n-1) continue;

            int c = 0;
            
            if(data[x[0]][y[0]] == 'M' && data[x[1]][y[1]]=='S'){
                c++;
            }

            if(data[x[0]][y[0]] == 'S' && data[x[1]][y[1]]=='M'){
                c++;
            }

            if(data[x[0]][y[1]] == 'S' && data[x[1]][y[0]]=='M'){
                c++;
            }

            if(data[x[0]][y[1]] == 'M' && data[x[1]][y[0]]=='S'){
                c++;
            }

            if(c==2){
                ans++;
            }

        }
    }

    print(ans);
}
// Main function
int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cout << fixed << setprecision(10);

    int t = 1;
    //cin >> t;

    while (t--) Solve();
}

/*
 * - Check for integer overflow and array bounds
 * - Handle special cases (e.g., n = 1, empty input)
 * - Stay organized and write intermediate results down
 * - Avoid sticking to one approach for too long
 * - Use debugging effectively to locate errors
 */
