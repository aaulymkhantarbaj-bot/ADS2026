//Doubly linked list
#include<iostream>
using namespace std;

struct Node{
    string title;
    Node* prev;
    Node* next;
};

int main(){
    Node* head = nullptr;
    Node* tail = nullptr;

    string cmd, x;

    while(cin >>cmd){
        if(cmd == "add_front"){
            cin >> x;
            Node* p = new Node{x, nullptr, head};

            if(head) head->prev = p;
            else tail = p;

            head = p;
            cout << "ok\n";
        }

        else if(cmd == "add_back"){
            cin >> x;
            Node* p = new Node{x, tail, nullptr};

            if(tail) tail->next = p;
            else head = p;

            tail = p;
            cout << "ok\n";
        }
        else if(cmd == "erase_front"){
            if(!head) cout << "error\n";
            else{
                cout << head->title << "\n";
                head = head->next;

                if(head) head->prev = nullptr;
                else tail = nullptr;
            }
        }

        else if(cmd == "erase_back"){
            if(!tail) cout << "error\n";
            else{
                cout << tail->title << "\n";
                tail = tail->prev;

                if(tail) tail->next = nullptr;
                else head = nullptr; 
            }
        }
        else if(cmd == "front") cout << (head ? head->title : "error") << "\n";
        else if(cmd == "back") cout << (tail ? tail->title : "error") << "\n";
        else if(cmd == "clear"){
            head = tail = nullptr;
            cout << "ok\n";
        }
        else if(cmd == "exit"){
            cout << "goodbye\n";
            break;
        }
    }
}