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

void insert_at_any_pos(Node *&head, Node *&tail, int pos, int n){
    Node *newNode = new Node(n);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    if(pos == 0){
        newNode->next = head;
        head->pre = newNode;
        head = newNode;
        return;
    }

    Node *i = head;
    while(pos-- > 1){
        i = i->next;
        if(i == NULL){
            cout << "Invalid position" << endl;
            return;
        }
    }

    if(i->next == NULL){
        newNode->next = i->next;

        i->next = newNode;
        newNode->pre = i;
        tail = newNode;
        return;
    }

    newNode->next = i->next;
    i->next->pre = newNode;

    i->next = newNode;
    newNode->pre = i;

}


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

int size_of_linked_list(Node *head){
   
    int size = 0;
    while(head != NULL){
        head = head->next;
        size++;
    }
    return size;
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
    

    // Insert at any position;
    while(1){
        int pos;
        cin >> pos;
        if(pos == -1){
            break;
        }
        int n;
        cin >> n;
        insert_at_any_pos(head, tail, pos, n);
        print_ace(head);
        print_rev(tail);
    }

    // Size;
    int size = size_of_linked_list(head);
    cout << "Size of linkedlist: " << size << endl;

    return 0;
}