#include "bits/stdc++.h"
using namespace std;

int main(){
    // This function works in such a way that after rotate(begin, middle, end) the element *middle becomes the first from begin to end.
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    int k = 3;
    rotate(vec.begin(), vec.begin() + k, vec.end());
    
    for(auto i : vec){
        cout << i << " ";
    }
    
}