#include <bits/stdc++.h>
using namespace std;

void print_set(multiset <string> s){
    for(auto i : s){
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    // multiset can be a alternative for priority queue
    multiset <string> s;
    s.insert("abc");
    s.insert("abc");
    s.insert("def");
    s.insert("ghi");
    print_set(s);
    
    // lets copy s 
    auto s1 = s;
    auto s2 =s;
    s1.erase("abc");
    s2.erase(s2.find("abc"));
    print_set(s1); // as we can see .erase(element) deletes all instance of it
    print_set(s2); // while .erase(iterator) deletes only one instance of it
    
    // .clear() clears the set
    s.clear();
    print_set(s);
}