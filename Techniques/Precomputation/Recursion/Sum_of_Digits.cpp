#include <bits/stdc++.h>
using namespace std;

int digitsum(int n){
    if(n/10<=0) return n%10;
    return (n%10 + digitsum(n/10));
}

int main() {
    int n = 334;
    cout << digitsum(n);
}