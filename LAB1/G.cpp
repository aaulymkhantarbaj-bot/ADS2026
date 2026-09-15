//Problem G: Balanced Sequence of Letters
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string stack = "";
    
    for (int i = 0; i < s.size(); i++) {
        if (stack.size() > 0 && stack.back() == s[i]) {
            stack.pop_back();
        } else {
            stack += s[i];
        }
    }
    
    if (stack.size() == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}