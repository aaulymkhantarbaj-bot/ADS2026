//Problem A: Greatest Common Divisor
#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }

    cout << a;

    return 0;
}