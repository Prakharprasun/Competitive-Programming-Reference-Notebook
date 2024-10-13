#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> vec= {1,2,3,4,5,6};

	// .begin() points towards first element
	vector<int> ::iterator it = vec.begin();
	auto i = vec.begin();
	cout << *it << " " << *i << "\n";
	i++;
	cout << *it << " " << *i << "\n";

	//.end() points to the position after the last element
	// *(.end()-1) returns the last element
	auto i2 = vec.end();
	cout << *(i2) << " " << *(i2-1) << "\n";
	
	// i++ and i+1 has no diffrence for vectors but the sme is not the case for other ds 
	vector<pair<int,int>> vp = {{1,2},{3,4},{5,6}};
	auto i3=vp.begin();
	i3++;
	cout << (i3)->first << " " << (*(i3)).second << "\n";
	// (i3)->first <=> (*(i3)).first
}