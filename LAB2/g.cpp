//Jonathan the Poet
#include <iostream>
#include <string>
using namespace std;

struct Node {
    string word;
    Node* next;
};

int main() {
    int n;
    long long k;
    cin >> n >> k;

    if (n == 0) return 0;

    Node* head = nullptr;
    Node* last = nullptr;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        Node* p = new Node{word, nullptr};

        if (head == nullptr) {
            head = p;
        } else {
            last->next = p;
        }

        last = p;
    }

    k %= n;

    if (k > 0) {
        Node* p = head;
        for (int i = 1; i < k; i++) {
            p = p->next;
        }

        Node* newHead = p->next;
        p->next = nullptr;
        last->next = head;
        head = newHead;
    }

    while (head != nullptr) {
        cout << head->word << " ";
        head = head->next;
    }
    cout << '\n';

    return 0;
}