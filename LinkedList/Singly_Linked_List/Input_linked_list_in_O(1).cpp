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

void insert_tail(Node *&head, Node *&tail, int val){
    Node *nNode = new Node(val);
    if(head == NULL){
        head = nNode;
        tail = nNode;
        return;
    }
    tail->next = nNode;
    tail = nNode;
}

void print(Node *head){
    while(head != NULL){
        cout << head->value << " ";
        head = head->next;
    }cout << endl;
}

int main(){
    // fast_io;

    Node *head = NULL;
    Node *tail = NULL;
    while(1){
        int value;
        cin >> value;
        if(value == -1){
            break;
        }
        insert_tail(head, tail, value);
    }

    print(head);
    
    return 0;
}