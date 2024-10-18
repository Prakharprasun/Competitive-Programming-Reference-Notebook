#include <bits/stdc++.h>
using namespace std;

int main () {
    // Lambda Functions : [](params) { // do smtg }(input)
    
    // func to add 2 no.s
    cout << [](int a , int b) { return a+b; } ( 2,3 ) << "\n";
    
    auto sum = [](int a , int b) { return a+b; };
    
    cout << sum(2,3) << "\n";
    
}