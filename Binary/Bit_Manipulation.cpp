#include "bits/stdc++.h"
using namespace std;

int main(){
// ref: https://cp-algorithms.com/algebra/bit-manipulation.html
// & : The bitwise AND operator compares each bit of its first operand with the corresponding bit of its second operand. If both bits are 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.
// | : The bitwise inclusive OR operator compares each bit of its first operand with the corresponding bit of its second operand. If one of the two bits is 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.
// ^ : The bitwise exclusive OR (XOR) operator compares each bit of its first operand with the corresponding bit of its second operand. If one bit is 0 and the other bit is 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.
// ~ : The bitwise complement (NOT) operator flips each bit of a number, if a bit is set the operator will clear it, if it is cleared the operator sets it.
    
    // Binary of 2 is 10 , binary of 3 is 11
    cout << (2 & 3) << "\n"; // returns 10 ie 2
    cout << (2 | 3) << "\n"; // returns 11 ie 3
    cout << (2 ^ 3) << "\n"; // returns 01 ie 1
    cout << (~3) << "\n"; // returns 11111111111111111111111111111100 ie -4
    
    // to check if number is odd
    cout << (2 & 1) << " " << (3 & 1) << "\n"; // returns 0 1
    
    // to divide by powers of 2
    cout << (8 >> 1) << " " << (15 >> 1) << '\n'; // returns 4 7
    cout << (8 >> 3) << " " << (17 >> 3) << '\n'; // returns 1 2 ie integer division by 2^3 ie 8 
    
    // to multiply by powers of 2
    cout << (8 << 1) << " " << (15 << 1) << '\n'; // returns 16 136
    cout << (8 << 3) << " " << (17 << 3) << '\n'; // returns 64  ie multiplication by 2^3 ie 8 
    
    // turn uppercase to lowercase
    cout << char('A' | ' ') << '\n';
    // turn lowercase to uppercase
    cout << char('a' & '_') << '\n';
}