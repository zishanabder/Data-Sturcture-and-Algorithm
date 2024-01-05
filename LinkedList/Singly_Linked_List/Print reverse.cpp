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

    Node(int v){
        this->value = v;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int n){
    Node *newNode = new Node(n);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    return;    
}

void print_reverse(Node *head){
    if(head == NULL){
        cout << endl;
        return;
    }
    print_reverse(head->next);
    cout << head->value << " ";
}

void print(Node *head){
    if(head == NULL){
        cout << endl;
        return;
    }
    cout << head->value << " ";
    print(head->next);
}

int main(){
    fast_io;

    Node *head = NULL;
    Node *tail = NULL;
    while(1){
        int n;
        cin >> n;
        if(n == -1){
            break;
        }
        insert_tail(head, tail, n);
    }

    print(head);
    print_reverse(head);
    return 0;
}