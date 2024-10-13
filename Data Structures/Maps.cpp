#include <bits/stdc++.h>
using namespace std;

void print_map(map<int,string> m) {
	for(auto i : m) {
		cout << i.first << " " << i.second << "\n";
	}
}

int main() {
	// map implementation is using red-black trees internally
	// iterator + 1 is not valid in maps but iterator++ is

	map<int,string> m;
	m[1]= "abc"; // o(logn)
	m[3]="ijk";
	m[2]="def";
	m[6]; // this is valid 6 stores default value empty string or 0
	m[6]="rst"; // you can update value of map at same key
	m.insert({4,"lmn"});
	// map is sorted
	print_map(m);

	auto it = m.find(3); // returns iterator to that value
	cout << it->first << " " << it->second << "\n"; // access the value in iterator using ->

	it=m.find(5); // if value is not present find will return .end()
	if(it==m.end()) cout << "if value is not present find will return .end()" << "\n";

	m.erase(6); // m.erase(key) will delete the key-value pair of key inputted
	print_map(m);

	// m.erase(iterator) also works
	it=m.find(1);
	m.erase(it);
	print_map(m);
	// giving erase() an iterator that dosent exist will result in ✨SegFault✨"
	it=m.find(100);
	if(it != m.end()) m.erase(it);
	else cout << "protected from ✨SegFault✨"";


}