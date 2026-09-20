//Kuanyshbek
#include <iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
};

int main(){
    int n;
    cin >> n;

    Node* head = nullptr;
    Node* last = nullptr;

    for(int i = 0; i < n; i++){
        int x; 
        cin >> x;

        Node* p = new Node;
        p->value = x;
        p->next = nullptr;

        if(head == nullptr){
            head = p;
            last = p;
        }
        else{
            last->next = p;
            last = p;
        }
    }

    Node* p = head;

    while(p != nullptr && p->next !=nullptr){
        Node* del = p->next;

        p->next = del->next;

        delete del;

        p = p->next;
    }

    p = head;

    while(p != nullptr){
        cout << p->value << " ";
        p = p->next;
    }

    return 0;
}