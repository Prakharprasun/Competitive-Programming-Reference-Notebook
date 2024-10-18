#include <bits/stdc++.h>
using namespace std;

int main () {
    vector <int> a      =       { 1, 2 , 3 , 4 , 5 , 6 } ;
    int arr[6]          =       { 1, 2 , 3 , 4 , 5 , 6 } ;
    
    // accumulate func : accumulate( iter begin , iter end , initial sum)
    // it returns the sum of elements from beginning iterator to ending iterator with initial sum added once 
    int sum = accumulate(a.begin(),a.end(),0);
    cout << sum;
}