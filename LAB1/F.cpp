//Problem F: Equal Strings
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t, a = "", b = "";
    cin >> s >> t;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '#') {
            if (a.size() > 0) a.pop_back();
        } else {
            a += s[i];
        }
    }
    
    for (int i = 0; i < t.size(); i++) {
        if (t[i] == '#') {
            if (b.size() > 0) b.pop_back();
        } else {
            b += t[i];
        }
    }
    
    if (a == b) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}