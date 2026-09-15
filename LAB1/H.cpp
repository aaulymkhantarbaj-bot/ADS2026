//Problem H: Nugman and Stack
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    vector<int> answer(n);
    stack<int> st; // stores ages, monotonically increasing from bottom to top
    
    for (int i = 0; i < n; i++) {
        while (!st.empty() && st.top() >= a[i]) {
            st.pop();
        }
        
        if (st.empty()) {
            answer[i] = -1;
        } else {
            answer[i] = st.top();
        }
        
        st.push(a[i]);
    }
    
    for (int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }
    cout << endl;
    
    return 0;
}