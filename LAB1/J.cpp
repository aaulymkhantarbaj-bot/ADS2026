//Problem J: Boris vs Nursik
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> boris, nursik;
    int x;
    
    // читаем карты Бориса до конца строки
    while (cin.peek() != '\n' && cin >> x) {
        boris.push_back(x);
    }
    // читаем карты Нурсика
    while (cin >> x) {
        nursik.push_back(x);
    }
    
    int moves = 0;
    
    while (!boris.empty() && !nursik.empty()) {
        int b = boris.front(); boris.pop_front();
        int n = nursik.front(); nursik.pop_front();
        
        bool borisWins;
        if (b == 0 && n == 9) {
            borisWins = true;
        } else if (b == 9 && n == 0) {
            borisWins = false;
        } else {
            borisWins = (b > n);
        }
        
        if (borisWins) {
            boris.push_back(b);
            boris.push_back(n);
        } else {
            nursik.push_back(b);
            nursik.push_back(n);
        }
        
        moves++;
    }
    
    if (boris.empty()) {
        cout << "Nursik " << moves << endl;
    } else {
        cout << "Boris " << moves << endl;
    }
    
    return 0;
}