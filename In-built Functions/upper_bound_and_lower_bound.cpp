#include <bits/stdc++.h>
using namespace std;

int main () {
    // lower_bound and upper_bound functions : arrays must be sorted
    // they work in O(log n)
    vector <int> a      =       { 1, 2 , 3 , 4 , 5 , 6 } ;
    int arr[6]          =       { 1, 2 , 3 , 4 , 5 , 6 } ;
    
    // lower_bound : eturns an iterator pointing to the first element in the range that is not less than the given value
    
    int *ptr = lower_bound( arr , arr + 6 , 4 );
    if (ptr == arr + 6 ){
        cout << "-1" << "\n";
    } else {
        cout << "value:" << *ptr << " ";
        cout << "index:" << ptr - arr << "\n";
        
    }
    
    auto it = lower_bound( a.begin() , a.end() + 6 , 4 );
    if (it == a.end()){
        cout << "-1" << "\n";
    } else {
        cout << "value:" << *it << " ";
        cout << "index:" << it - a.begin() << "\n";
        
    }
    
    
    // upper_bound : returns an iterator pointing to the first element in the range that is greater than the given value
    
    ptr = upper_bound( arr , arr + 6 , 4 );
    if (ptr == arr + 6 ){
        cout << "-1" << "\n";
    } else {
        cout << "value:" << *ptr << " ";
        cout << "index:" << ptr - arr << "\n";
        
    }
    
    it = upper_bound( a.begin() , a.end() + 6 , 4 );
    if (it == a.end()){
        cout << "-1" << "\n";
    } else {
        cout << "value:" << *it << " ";
        cout << "index:" << it - a.begin() << "\n";
        
    }
    
    // in case of sets and maps use .lower_bound() and .upper_bound()
    // for maps and sets it works internally on trees
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    
    auto iter = s.upper_bound(2);
    if (iter == s.end()){
        cout << "-1" << "\n";
    } else {
        cout << "value:" << *iter << "\n";
    }
    
    
    // for map it will work only on keys
    map<int,string> m;
	m[1]= "abc";
	m[3]="ijk";
	m[2]="def";
	m[6]; // this is valid 6 stores default value empty string or 0
	m[6]="rst";
	m.insert({4,"lmn"});

    auto map_iter = m.upper_bound(5);
    if (map_iter == m.end()){
        cout << "-1" << "\n";
    } else {
        cout << "key:" << map_iter->first << " " << "value:" << map_iter->second << "\n";
    }
}