//Problem I: Royal Flush
#include <iostream>
#include <deque>
using namespace std;

int main() {
    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        vector<int> d; // соответствует state_{i+1}
        for(int i = N; i >= 1; i--){
            d.insert(d.begin(), i);           // rotated = [i] + state_{i+1}
            int m = d.size();
            int k = i % m;                    // сколько карт переносили по кругу
            rotate(d.begin(), d.begin() + (m - k), d.end()); // обратный поворот
        }
        for(int i = 0; i < N; i++) cout << d[i] << " \n"[i == N-1];
    }
    
    return 0;
}