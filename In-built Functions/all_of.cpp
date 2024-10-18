#include <bits/stdc++.h>
using namespace std;

int main () {
    // all_of returns 1 if all elements follow a certain criterion and 0 otherwise
    
    vector<int> a = { 1 , 2 , 3 , 4 , 5 , 6 };
    vector<int> e = { 2 , 4 , 6 , 8 , 10 , 12};
    // Lambda functoin to check if even
    auto even = [](int n){ return (n%2==0); };
    
    // check if all no.s are even with all_of
    cout << all_of(a.begin(),a.end(),even) << "\n"; // returns 0
    cout << all_of(e.begin(),e.end(),even);         // returns 1
    
}