#include <bits/stdc++.h>
using namespace std;

int main () {
    vector <int> a      =       { 1, 2 , 3 , 4 , 5 , 6 } ;
    int arr[6]          =       { 1, 2 , 3 , 4 , 5 , 6 } ;
    
    int min = *min_element(a.begin(),a.end());
    cout << min << "\n";
    min = *min_element(arr,arr+6);
    cout << min << "\n";
}