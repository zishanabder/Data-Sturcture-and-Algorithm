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

void print(Node *head){
    while(head != NULL){
        cout << head->value << " ";
        head = head->next;
    }cout << endl;
    return;
}

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

bool detect_Cycle(Node *head){
    Node *s = head;
    Node *f = head;
    while(f != NULL && f->next != NULL){
        
        s = s->next;
        f = f->next->next;
        if(s == f){
            return true;
        }
    }
    return false;
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

        insert(head, tail, n);
    }
    print(head);
    // tail->next = head;
    
    cout << (detect_Cycle(head) ? "Cyclic" : "Non Cyclic" ) << endl;

    return 0;
}