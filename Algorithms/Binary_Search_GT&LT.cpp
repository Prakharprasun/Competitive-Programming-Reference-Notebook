long long f(long long mid, int i, vector<vector<int>> &a) {
    return a[mid][i];  
}

int binary_search_gt(int l, int r, int x, int i, vector<vector<int>> &a) {
    // Binary search for the first element strictly greater than x
    int mid;
    int res = r + 1; 
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (f(mid, i, a) > x) {
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return res;
}

int binary_search_lt(int l, int r, int x, int i, vector<vector<int>> &a) {
    // Binary search for the last element strictly less than x
    int mid;
    int res = l - 1; 
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (f(mid, i, a) < x) {
            res = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return res;
}
