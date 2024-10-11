#include <bits/stdc++.h>
using namespace std;

class Modulo {
public:
    int add(int a, int b, int m){
        return (((a % m) + (b % m)) % m + m) % m;
    }

    int subtract(int a, int b, int m){
        return (((a % m) - (b % m)) % m + m) % m;
    }

    int multiply(int a, int b, int m){
        return (((a % m) * (b % m)) % m + m) % m;
    }

    // Modular inverse using Fermat's Little Theorem
    int mod_inverse(int b, int m){
        return power(b, m - 2, m);  // b^(m-2) % m
    }

    // Fast exponentiation to calculate b^e % m
    int power(int b, int e, int m){
        int res = 1;
        b = b % m;
        while (e > 0) {
            if (e % 2 == 1)
                res = (res * b) % m;
            e = e >> 1;  // Divide the exponent by 2
            b = (b * b) % m;
        }
        return res;
    }

    int divide(int a, int b, int m){
        return (a % m * mod_inverse(b, m)) % m;
    }
};

Modulo Modulo;
int M = 1e9 + 7;

int main() {
    int a = 2;
    int b = 3;

    int ans_sum = Modulo.add(a, b, M); 
    cout << ans_sum << endl;
    
    int ans_sub = Modulo.subtract(a, b, M); 
    cout << ans_sub << endl;
    
    int ans_mul = Modulo.multiply(a, b, M); 
    cout << ans_mul << endl;
    
    int ans_div = Modulo.divide(a, b, M);
    cout << ans_div << endl;
}
