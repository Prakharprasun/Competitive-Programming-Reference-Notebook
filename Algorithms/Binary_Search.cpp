#include <bits/stdc++.h>
using namespace std;

// Template for any monotonic function f
long long f(long long mid) {
    // Define your monotonic function here
    return mid * mid;  // Example: square function
}

int binary_search(int l, int r, int x) {
    long long mid;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (f(mid) == x) {
            return mid;  // Found exact value
        }
        if (f(mid) > x) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return r;  // Return the closest approximation or the greatest element <= x
}

int main() {
    int l = 0, r = 1000, x = 36;
    cout << "Result: " << binary_search(l, r, x) << "\n";
    return 0;
}