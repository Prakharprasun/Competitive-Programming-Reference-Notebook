#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

long long sum[N];
void prefix_sum(vector<int> arr){
    sum[0]=arr[0];
    for(int i=1;i<arr.size();i++){
        sum[i]=sum[i-1]+arr[i];
    }
}

int main() {
    vector<int> arr={1,2,2,2,2,3,3,4,4,4};
    prefix_sum(arr);
    int q = 5;
    while(q--){
        int n;
        cin >> n;
        cout << sum[n] << "\n";
    }
}