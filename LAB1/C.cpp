//Problem C: Prime or Not
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    if (n < 2) {
        cout << "NO" << endl;
        return 0;
    }
    
    bool isPrime = true;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    
    if (isPrime) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
