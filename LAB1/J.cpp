//Problem J: Boris vs Nursik
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> b, n;
    for(int i=0;i<5;i++){ int x; cin>>x; b.push_back(x); }
    for(int i=0;i<5;i++){ int x; cin>>x; n.push_back(x); }

    long long moves = 0;
    while(!b.empty() && !n.empty()){
        int bc = b.front(); b.pop_front();
        int nc = n.front(); n.pop_front();
        moves++;

        bool borisWins = (bc > nc);
        if(bc == 0 && nc == 9) borisWins = true;
        else if(bc == 9 && nc == 0) borisWins = false;

        if(borisWins){
            b.push_back(bc);
            b.push_back(nc);
        } else {
            n.push_back(bc);
            n.push_back(nc);
        }
    }

    if(b.empty()) cout << "Nursik " << moves << endl;
    else cout << "Boris " << moves << endl;
    
    return 0;
}