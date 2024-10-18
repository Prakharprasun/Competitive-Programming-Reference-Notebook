#include <bits/stdc++.h>
using namespace std;

int main () {
    vector <int> a      =       { 1, 2 , 3 , 4 , 5 , 6 } ;
    int arr[6]          =       { 1, 2 , 3 , 4 , 5 , 6 } ;
    
    // count func : returns the no. of occurence of particular element
    int ct = count ( a.begin() , a.end() , 4 );
    cout << ct;
}