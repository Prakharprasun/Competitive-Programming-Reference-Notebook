#include <bits/stdc++.h>
using namespace std;

void print_queue(queue<int> q) {
    while(!q.empty()){
        cout << q.front() << " "; 
        q.pop();
    }
    cout << "\n";
}

int main() {
    // queue works on FIFO principle
    queue<int> q;
    
    // push elements through .push() towards the top
    
    q.push(1);
    q.push(2);
    q.push(3);
    
    print_queue(q);
    q.pop();
    cout << "first element popped" << "\n";
    print_queue(q);
}