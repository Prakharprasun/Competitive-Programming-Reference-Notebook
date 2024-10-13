#include <bits/stdc++.h>
using namespace std;

void print_map(map<string,int> m) {
	for(auto i : m) {
		cout << i.first << " " << i.second << "\n";
	}
}

int main() {
	map<string,int> m;
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		string s;
		cin >> s;
		m[s]++; // simply writing m[s]++ initialises m[s] with 0
	}
	print_map(m);
}