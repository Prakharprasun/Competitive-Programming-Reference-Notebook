#include <bits/stdc++.h>
using namespace std;

void print_stack(stack<int> li) {
    while(!li.empty()){
        cout << li.top() << " ";
        li.pop();
    }
}

int main() {
    // stack is similar to list in python
    // it works on LIFO principle last in first out
    // recursion works on stack
    stack<int> li;
    // .push() inserts element to top
    // .pop() removes element from top
    // .top() shows element at top
    
    li.push(1);
    li.push(2);
    li.push(3);
    
    auto li2 = li;
    
    int a = li.top();
    li.pop();
    int b = li.top();
    
    cout << a << " " << b << "\n" ;
    
    print_stack(li2);
}