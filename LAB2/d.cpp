//Reverse the Linked List
#include<iostream>
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

    Node* previous = nullptr;
    Node* current = head;

    while(current != nullptr){
        Node* next = current->next;

        current->next = previous;

        previous = current;
        current = next;
    }

    head = previous;

    Node* p = head;

    while(p != nullptr){
        cout << p->value << " ";
        p = p->next;
    }
    return 0;
}