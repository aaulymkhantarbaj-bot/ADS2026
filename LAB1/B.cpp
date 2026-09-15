//Problem B: Binary Exponentiation
#include <iostream>
using namespace std;
int main() {
    long long a, b, m;
    cin >> a >> b >> m;

    long long result = 1 % m;
    a %= m;

    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % m;
        }

        a = (a * a) % m;
        b /= 2;
    }

    cout << result;

    return 0;
}