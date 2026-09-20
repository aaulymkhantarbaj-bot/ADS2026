//Delete the Middle Node
#include<iostream>
using namespace std;

struct Node{
    long long value;
    Node* next;
};

int main(){
    long long n;
    cin >> n;

    Node a[1000000];

    for(long long i = 0; i < n; i++){
        cin >> a[i].value;

        if(i < n -1){
            a[i].next = &a[i + 1];
        }
        else
            a[i].next = nullptr;
    }

    long long middle = n / 2;

    if(n > 1){
        Node* p = &a[middle - 1];

        p->next = a[middle].next;
    }
    else{
        a[0].next = nullptr;
    }

    Node* p = &a[0];

    if(n == 1){
        cout << endl;
        return 0;
    }

    while(p != nullptr){
        cout << p->value << " ";
        p = p->next;
    }

    return 0;
}