#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

long long freq[N];
void precomputation(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        freq[arr[i]]++;
    }
}

int main() {
    vector<int> arr={1,2,2,2,2,3,3,4,4,4};
    precomputation(arr);
    int q = 5;
    while(q--){
        int n;
        cin >> n;
        cout << freq[n] << "\n";
    }
}
