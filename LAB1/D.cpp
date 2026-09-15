//Problem D: Prime Numbers
#include <iostream>
using namespace std;

bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int k;
    cin >> k;
    
    int count = 0;
    long long num = 1;
    
    while (count < k) {
        num++;
        if (isPrime(num)) {
            count++;
        }
    }
    
    cout << num << endl;
    return 0;
}