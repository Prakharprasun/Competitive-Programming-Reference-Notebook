//By: Prakhar

#include<bits/stdc++.h>
using namespace std;

void binary_to_decimal(long long n){
    long long ans=0;
    long long i=1;
    while(n>0){
        ans+=(n%10)*i;
        n=n/10;
        i=i*2;
    }
    cout << ans;
}

int main(){
	long long n=10001001;
	binary_to_decimal(n);
}