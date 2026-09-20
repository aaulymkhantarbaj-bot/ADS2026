//195823. Zoro and Seven Sword Style.
#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
};

int length(Node* head) {
    int n = 0;
    for (Node* p = head; p != nullptr; p = p->next) n++;
    return n;
}

Node* inserts(Node* head, int x, int p) {
    Node* node = new Node{x, nullptr};
    if (p == 0) {
        node->next = head;
        return node;
    }
    Node* prev = head;
    for (int i = 1; i < p; i++) prev = prev->next;
    node->next = prev->next;
    prev->next = node;
    return head;
}

Node* remove(Node* head, int p) {
    if (p == 0) {
        Node* d = head;
        head = head->next;
        delete d;
        return head;
    }
    Node* prev = head;
    for (int i = 1; i < p; i++) prev = prev->next;
    Node* d = prev->next;
    prev->next = d->next;
    delete d;
    return head;
}

void print(Node* head) {
    if (head == nullptr) {
        cout << -1 << '\n';
        return;
    }
    for (Node* p = head; p != nullptr; p = p->next)
        cout << p->val << ' ';
    cout << '\n';
}

Node* replace(Node* head, int p1, int p2) {
    // вынимаем узел p1
    Node* node;
    if (p1 == 0) {
        node = head;
        head = head->next;
    } else {
        Node* prev = head;
        for (int i = 1; i < p1; i++) prev = prev->next;
        node = prev->next;
        prev->next = node->next;
    }
    // вставляем его на позицию p2
    if (p2 == 0) {
        node->next = head;
        return node;
    }
    Node* prev = head;
    for (int i = 1; i < p2; i++) prev = prev->next;
    node->next = prev->next;
    prev->next = node;
    return head;
}

Node* reverse(Node* head) {
    Node* prev = nullptr;
    while (head != nullptr) {
        Node* nxt = head->next;
        head->next = prev;
        prev = head;
        head = nxt;
    }
    return prev;
}

Node* cyclic_left(Node* head, int x) {
    if (head == nullptr) return head;
    int n = 1;
    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
        n++;
    }
    x %= n;
    if (x == 0) return head;
    tail->next = head;              // замыкаем в кольцо
    Node* cur = head;
    for (int i = 1; i < x; i++) cur = cur->next;
    Node* newHead = cur->next;
    cur->next = nullptr;            // разрываем после x-го узла
    return newHead;
}

Node* cyclic_right(Node* head, int x) {
    int n = length(head);
    if (n == 0) return head;
    return cyclic_left(head, (n - x % n) % n);
}

int main() {
    Node* head = nullptr;
    int cmd;
    while (cin >> cmd && cmd != 0) {
        if (cmd == 1) {
            int x, p;
            cin >> x >> p;
            head = inserts(head, x, p);
        } else if (cmd == 2) {
            int p;
            cin >> p;
            head = remove(head, p);
        } else if (cmd == 3) {
            print(head);
        } else if (cmd == 4) {
            int p1, p2;
            cin >> p1 >> p2;
            head = replace(head, p1, p2);
        } else if (cmd == 5) {
            head = reverse(head);
        } else if (cmd == 6) {
            int x;
            cin >> x;
            head = cyclic_left(head, x);
        } else if (cmd == 7) {
            int x;
            cin >> x;
            head = cyclic_right(head, x);
        }
    }
    return 0;
}