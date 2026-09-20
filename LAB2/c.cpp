//Database
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int cnt = 1;
    for (int i = 1; i < n; i++)
        if (a[i] != a[i - 1]) cnt++;

    cout << cnt << '\n';
    cout << a[0] << '\n';
    for (int i = 1; i < n; i++)
        if (a[i] != a[i - 1])
            cout << a[i] << '\n';

    return 0;
}