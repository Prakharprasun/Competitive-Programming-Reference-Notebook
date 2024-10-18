#include <bits/stdc++.h>
using namespace std;

int main () {
    // none_of returns 1 if none elements follow a certain criterion and 0 otherwise
    // i.e. all elements will return false on the given condn.
    
    vector<int> a = { 1 , 2 , 3 , 4 , 5 , 6 };
    vector<int> e = { 2 , 4 , 6 , 8 , 10 , 12};
    // Lambda functoin to check if odd
    auto even = [](int n){ return (n%2!=0); };
    
    // check if all no.s are odd with all_of
    cout << none_of(a.begin(),a.end(),even) << "\n"; // returns 0
    cout << none_of(e.begin(),e.end(),even);         // returns 1
    
}