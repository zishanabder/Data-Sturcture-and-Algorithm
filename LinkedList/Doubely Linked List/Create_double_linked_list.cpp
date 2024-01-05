#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

class Node{
    public:
        int value;
        Node* next;
        Node* pre;

    Node(int v){
        this->value = v;
        this->next = NULL;
        this->pre = NULL;
    }
};

void print(Node *head){
    while(head != NULL){
        cout << head->value << " ";
        head = head->next;
    }cout << endl;
}

void print_rev(Node *tail){
    while(tail != NULL){
        cout << tail->value << " ";
        tail = tail->pre;
    }cout << endl;
}

int main(){
    fast_io;

    Node *head = NULL;
    Node *tail = NULL;

    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);

    a->next = b;
    b->pre = a;
    b->next = c;
    c->pre = b;

    head = a;
    print(head);
    cout << endl;

    tail = c;
    print_rev(tail);


    return 0;
}