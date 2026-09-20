//Ragnarok
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long x, cur, best;
    cin >> x;
    cur = best = x;

    for (int i = 1; i < n; i++) {
        cin >> x;
        if (cur + x > x) cur = cur + x;
        else cur = x;
        if (cur > best) best = cur;
    }

    cout << best << '\n';
    return 0;
}