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
}

void sort_linked_list(Node *&head){
    for(Node *i = head; i->next != NULL; i = i->next){
        for(Node *j =  i->next; j != NULL; j = j->next){
            if(i->value < j->value){
                swap(i->value, j->value);
            }
        }
    }
    return;    
}

void print(Node *head){
    while(head != NULL){
        cout << head->value << " ";
        head = head->next;
    }cout << endl;
    return;
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

    sort_linked_list(head);
    print(head);

    return 0;
}