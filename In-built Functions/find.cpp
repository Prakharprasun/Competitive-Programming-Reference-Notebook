#include <bits/stdc++.h>
using namespace std;

int main () {
    vector <int> a      =       { 1, 2 , 3 , 4 , 5 , 6 } ;
    int arr[6]          =       { 1, 2 , 3 , 4 , 5 , 6 } ;
    
    // find func : returns the iter of element if present and returns .end() if not
    auto it = find(a.begin(),a.end(),5);
    if(it == a.end()){
        cout << "not found";
    } else {
        cout << *it;
    }
}