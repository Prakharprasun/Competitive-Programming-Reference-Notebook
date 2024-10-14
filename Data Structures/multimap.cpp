#include <bits/stdc++.h>
using namespace std;

void print_map(multimap<int,string> m) {
	for(auto i : m) {
		cout << i.first << " " << i.second << "\n";
	}
}
void print_map(map<int,vector<string>> m) {
	for(auto i : m) {
		cout << i.first << " ";
		for(auto j: i.second){
		    cout << j << " ";
		}
	}
	cout << "\n";
}

int main() {
    // multimap can store several values in same key
    multimap <int, string> m;
    m.insert({1,"abc"});
    m.insert({1,"def"});
    print_map(m);
    
    // alternative to that is storing a vector as values
    map<int, vector<string>> m1;
    m1[1].push_back("abc");
    m1[1].push_back("def");
    print_map(m1);
}