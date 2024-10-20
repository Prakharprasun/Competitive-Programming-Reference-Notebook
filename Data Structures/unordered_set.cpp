#include <bits/stdc++.h>
using namespace std;

void print_set(unordered_set<string> s){
    for(auto i : s){
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    // unordered does most stuff in o(n)
    // use it to check if some element is present
    // it does not work with complex datatypes as they are not easy to hash
    unordered_set<string> s;
    // insert values into set using insert()
    s.insert("abc");
    s.insert("def");
    s.insert("ghi");
    
    // accessing elements can be done through .find() which will return an iterator pointing to that elements
    auto it = s.find("abc");
    // if element dont exist it will return .end()
    it = s.find("espresso");
    if(it==s.end()) cout << "see\n"; 
    
    // printing a set via user defined function
    print_set(s);
    
    // .erase() works with both iterators and values
    s.erase("abc");
    it = s.find("ghi");
    s.erase(it);
    print_set(s);
}