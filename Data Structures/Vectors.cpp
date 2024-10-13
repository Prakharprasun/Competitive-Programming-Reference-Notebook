#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<int> vec){
    for(auto i: vec){
        cout << i << " ";
    }
    cout << "\n";
}

int main(){
    vector<int> vec = {1,2,3,4,5,6};
    print_vector(vec);
    
    // no. of elements of vector is given by
    cout << int(vec.size()) << "\n";
    
    // push_back appends a element at end
    vec.push_back(7);
    print_vector(vec);
    
    // pop_back removes an element from end
    vec.pop_back();
    print_vector(vec);
    
    // we can copy vectors but not arrays
    vector<int> v = vec;
    print_vector(v);
    
    // we can also reference vectors
    vector<int> &v_ref = vec;
    v_ref.push_back(7);
    print_vector(vec);
}