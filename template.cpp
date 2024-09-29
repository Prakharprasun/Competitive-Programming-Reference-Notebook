#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define debug(v)                                                                 \
	cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << "\n";
    
#define debugvec(v)                                                                 \
	{cerr << "Line(" << __LINE__ << ") -> " << #v << " = "; for(unsigned int i=0;i<a.size();i++){cerr << a[i] << " ";}cerr << "\n";}
	
void printvec(vector<long long> a){
    for(long long i=0;i<(long long)a.size();i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    return;
}

// Debugging for 2D vectors
#define DEBUG_2D_VEC(v)                                                     \
    {                                                                       \
        cerr << "Line(" << __LINE__ << ") -> " << #v << " = [" << endl;      \
        for (const auto &row : v) {                                         \
            cerr << "  [ ";                                                 \
            for (const auto &i : row) cerr << i << " ";                     \
            cerr << "]" << endl;                                            \
        }                                                                   \
        cerr << "]" << endl;                                                \
    }

// Debugging for pairs
#define DEBUG_PAIR(p) cerr << "Line(" << __LINE__ << ") -> " << #p << " = (" << p.first << ", " << p.second << ")" << endl

// Debugging for maps
#define DEBUG_MAP(m)                                                     \
    {                                                                    \
        cerr << "Line(" << __LINE__ << ") -> " << #m << " = { ";          \
        for (const auto &kv : m) cerr << kv.first << ": " << kv.second << ", "; \
        cerr << "}" << endl;                                              \
    }

// Debugging for sets
#define DEBUG_SET(s)                                                     \
    {                                                                    \
        cerr << "Line(" << __LINE__ << ") -> " << #s << " = { ";          \
        for (const auto &x : s) cerr << x << " ";                         \
        cerr << "}" << endl;                                              \
    }

// Debugging for ordered sets from pb_ds
#define DEBUG_ORDERED_SET(os)                                             \
    {                                                                     \
        cerr << "Line(" << __LINE__ << ") -> " << #os << " = { ";          \
        for (int i = 0; i < (int)os.size(); ++i) {                         \
            cerr << *os.find_by_order(i) << " ";                           \
        }                                                                 \
        cerr << "}" << endl;                                               \
    }

#define INF 1e18

using ll = long long;
using ull = unsigned long long;
using db = long double;
using str = string;

using pi = pair<int,int>;
#define mp make_pair
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define ins insert

#define tcT template<class T
tcT> using V = vector<T>; 
tcT, size_t SZ> using AR = array<T,SZ>;
using vi = V<int>;
using vb = V<bool>;
using vpi = V<pi>;
using vll = V<ll>;

#define sz(x) int((x).size())
#define all(x) begin(x), end(x)
#define sor(x) sort(all(x))
#define rsz resize
#define pb push_back
#define ft front()
#define bk back()

#define range(i,a,b) for (int i = (a); i < (b); ++i)
#define frange(i,a) range(i,0,a)
#define rrange(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define rfrange(i,a) rrange(i,0,a)
#define rep(a) frange(_,a)
#define each(a,x) for (auto& a: x)

const int MOD = 1e9+7;
const db PI = acos((db)-1);
mt19937 rng(0); // or mt19937_64

tcT> bool ckmin(T& a, const T& b) {
	return b < a ? a = b, 1 : 0; } // set a = min(a,b)
tcT> bool ckmax(T& a, const T& b) {
	return a < b ? a = b, 1 : 0; } // set a = max(a,b)
    
typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set; //find_by_order()-> returns an iterator to the k-th largest element (counting from zero), order_of_key()-> the number of items in a set that are strictly smaller than our item, ss.erase(ss.find_by_order(ss.order_of_key(x)))-> To remove an element in a multiset, you must delete it using iterators;

long long gcd(long long a, long long b) { return b == 0 ? a : gcd(b, a % b); }
long long lcm(long long a, long long b) {return (a*b)/gcd(a,b);}
vector<ll> sieve(long long n) {long long*arr = new long long[n + 1](); vector<ll> vect; for (long long i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (long long j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
bool revsort(ll a, ll b) {return a > b;}
long long binpow(long long a, long long b, long long m) {a %= m;long long res = 1;while (b > 0) {if (b & 1)res = res * a % m;a = a * a % m;b >>= 1;}return res;}

// Two Pointer approach to find two numbers in sorted array that sum to target
pair<int, int> twoPointerSum(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return {left, right}; // Found the pair
        } else if (sum < target) {
            left++; // Increase the left pointer to get a larger sum
        } else {
            right--; // Decrease the right pointer to get a smaller sum
        }
    }
    return {-1, -1}; // If no valid pair found
}

// Sliding Window approach to find maximum sum of 'k' consecutive elements in an array
int slidingWindowMaxSum(const vector<int>& arr, int k) {
    int n = arr.size();
    if (n < k) return -1; // Invalid if array size is smaller than k
    
    int max_sum = 0, window_sum = 0;

    // Calculate sum of the first window
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }
    
    max_sum = window_sum;
    
    // Slide the window, one element at a time
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k]; // Add new element and remove the first element of the previous window
        max_sum = max(max_sum, window_sum);
    }
    
    return max_sum;
}

// Function to compute the prefix sum array
vector<int> prefixSum(const vector<int>& arr) {
    int n = arr.size();
    vector<int> prefix(n);
    prefix[0] = arr[0]; // First element is the same
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i]; // Add current element to the previous sum
    }
    return prefix;
}

// Function to get the sum of the range [l, r] using the prefix sum array
int rangeSum(const vector<int>& prefix, int l, int r) {
    if (l == 0) return prefix[r]; // If starting from index 0, return prefix[r]
    return prefix[r] - prefix[l - 1]; // Otherwise, subtract prefix[l-1] from prefix[r]
}

// Binary Search
int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // Not found
}

// Dynamic Programming: Longest Common Subsequence (LCS)
int lcs(string s1, string s2) {
    int n = s1.length(), m = s2.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n][m];
}

// Knapsack Problem (0-1 Knapsack)
int knapsack(int W, vector<int>& wt, vector<int>& val, int n) {
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (wt[i - 1] <= w) {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - wt[i - 1]] + val[i - 1]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    return dp[n][W];
}

// Depth First Search (DFS)
void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    // do something
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            // do something
            dfs(neighbor, adj, visited);
        }
    }
}

// Breadth First Search (BFS)
void bfs(int start, vector<vector<int>>& adj, int n) {
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

// Dijkstra’s Algorithm (Shortest Path for weighted graphs)
vector<int> dijkstra(int start, vector<vector<pair<int, int>>>& adj, int n) {
    vector<int> dist(n, INT_MAX);
    dist[start] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        for (auto& edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

// Bellman-Ford Algorithm (Single Source Shortest Path for weighted graphs)
vector<int> bellmanFord(int start, vector<tuple<int, int, int>>& edges, int n) {
    vector<int> dist(n, INT_MAX);
    dist[start] = 0;
    for (int i = 1; i < n; i++) {
        for (auto& edge : edges) {
            int u, v, w;
            tie(u, v, w) = edge;
            if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }
    return dist;
}

// Floyd-Warshall Algorithm (All-Pairs Shortest Path)
void floydWarshall(vector<vector<int>>& dist) {
    int n = dist.size();
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}

// Graph input using Adjacency List
vector<vector<int>> graphInput(int n, int m) {
    vector<vector<int>> graph(n + 1);  // Use n+1 if vertices are 1-indexed
    for (int i = 0; i < m; ++i) {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    return graph;
}

vll helper(string& s) {
    
}

void solve(){
    
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
	fastio();
	ll t=1;
    // cin >> t;
    for (int i = 0; i < t; i++) {
        // cout << "Case #" << i+1 << ":";
        solve();
    }
}