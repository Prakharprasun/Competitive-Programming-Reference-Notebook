#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;

long long ps[N][N];
int arr[N][N];

int main() {
    int n=3; int m=3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> arr[i][j];
            ps[i][j]=arr[i][j]+ps[i-1][j]+ps[i][j-1]-ps[i-1][j-1];
        }
    }
    
    int q = 2;
    while(q--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        cout << ps[c][d] - ps[a-1][d] - ps[c][b-1] + ps[a-1][b-1] << "\n";
    }
}
