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

void insert(Node *&head, Node *&tail, int n){
    Node *newNode = new Node(n);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print(Node *head){
    while(head != NULL){
        cout << head->value << " ";
        head = head->next;
    }cout << endl;
}

void reverse(Node *&head, Node *curr){
    if(curr->next == NULL){
        head = curr;
        return;
    }
    reverse(head, curr->next);
    curr->next->next = curr;
    curr->next = NULL;
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
    print(head);
    
    reverse(head, head);
    print(head);

    return 0;
}