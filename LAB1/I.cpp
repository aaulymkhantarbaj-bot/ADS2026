//Problem I: Royal Flush
#include <iostream>
#include <deque>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        deque<int> d;
        for (int i = 1; i <= n; i++) d.push_back(i);
        
        int answer[100005];
        int step = 1;
        
        while (!d.empty()) {
            int size = d.size();
            int moves = step % size;
            
            for (int i = 0; i < moves; i++) {
                int front = d.front();
                d.pop_front();
                d.push_back(front);
            }
            
            int pos = d.front();
            d.pop_front();
            answer[pos] = step;
            
            step++;
        }
        
        for (int i = 1; i <= n; i++) {
            cout << answer[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}