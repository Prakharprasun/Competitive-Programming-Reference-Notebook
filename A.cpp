//By Prakhar Prasun

#include <bits/stdc++.h>
using namespace std;

vector<int> o[26];
int ans[26];
int main(){
#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
#endif
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	string s;
	cin >> s;
	
	int ans=0;
	for(int i=0;i<int(s.size());i++){
		o[s[i]-'A'].push_back(i);
	}
	for(int i=0;i<26;i++){
		int ans1=0;
		
		for(int j=1;j<int(o[i].size());j++){
			if(o[i][j]>=2){
				ans1+=ans1+1;
			}
			ans1+=o[i][j]-o[i][j-1]-1;
		}
		ans+=ans1;
	}

	cout << ans;
}