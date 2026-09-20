//One-time guests
#include <iostream>
#include <queue>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt[26] = {};
        queue<char> q;
        for (int i = 0; i < n; i++) {
            char c;
            cin >> c;
            cnt[c - 'a']++;
            q.push(c);
            while (!q.empty() && cnt[q.front() - 'a'] > 1)
                q.pop();
            if (q.empty()) cout << -1;
            else cout << q.front();
            cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}
