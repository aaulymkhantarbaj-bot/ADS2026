//Merge Two Sorted Lists
#include<iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
};

int main(){
    int n, m;
    cin >> n;

    Node* head1 = nullptr;
    Node* last1 = nullptr;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        Node* p = new Node{x, nullptr};

        if(head1 == nullptr)
            head1 = p;
        else
            last1->next = p;
        
        last1 = p;
    }

    cin >> m;

    Node* head2 = nullptr;
    Node* last2 = nullptr;

    for(int i = 0; i < m; i++){
        int x;
        cin >> x;

        Node* p = new Node{x, nullptr};

        if(head2 == nullptr)
            head2 = p;
        else    
            last2->next = p;
        
        last2 = p;
    }

    if(head1 == nullptr){
        while(head2 != nullptr){
            cout << head2->value << " ";
            head2 = head2->next;
        }
        return 0;
    }

    if(head2 == nullptr){
        while(head1 != nullptr){
            cout << head1->value << " ";
            head1 = head1->next;
        }
        return 0;
    }

    Node* head;
    Node* last;

    if(head1->value <= head2->value){
        head = head1;
        head1 = head1->next;
    }
    else{
        head = head2;
        head2 = head2->next;
    }

    last = head;

    while(head1 != nullptr && head2 != nullptr){
        if(head1->value <= head2->value){
            last->next = head1;
            head1 = head1->next;
        }
        else{
            last->next = head2;
            head2 = head2->next;
        }

        last = last->next;
    }

    if(head1 != nullptr){
        last->next = head1;
    }
    if(head2 != nullptr){
        last->next = head2;
    }
    while(head != nullptr){
        cout << head->value << " ";
        head = head->next;
    }

    return 0;
}