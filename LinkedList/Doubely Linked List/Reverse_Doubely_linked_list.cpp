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


void insert(Node *&head, Node *&tail, int n){
    Node *newNode = new Node(n);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->pre = tail;
    tail = newNode;
}

void print_ace(Node *head){
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

void revreverse_dobley_linked_list(Node *head, Node *tail){
    Node *i = head;
    Node *j = tail;
    while(i != j && i->next != j){
        swap(i->value, j->value);
        i = i->next;
        j = j->pre;
    }
    swap(i->value, j->value);
}

int main(){
    // fast_io;

    Node *head = NULL;
    Node *tail = NULL;

    while(1){
        int n;
        cin >> n;
        if(n == -1){
            break;
        }
        insert(head, tail, n);
    }

    print_ace(head);
    print_rev(tail);

    revreverse_dobley_linked_list(head, tail);
    print_ace(head);
    print_rev(tail);

    return 0;
}