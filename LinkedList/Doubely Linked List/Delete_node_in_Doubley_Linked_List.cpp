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

void delete_Node(Node *&head, Node *&tail, int pos){

    Node *temp = head;
    if(head == NULL){
        return;
    }

    if(pos == 0){
        Node *de = head;
        head = head->next;
        if(head == NULL){
            tail = NULL;
            delete de;
            return;
        }
        head->pre = NULL;
        delete de;
        return;
    }

    while(pos-- > 1){

        temp = temp->next;
        if(temp == NULL || temp == tail || temp->next == NULL){
            cout << "Invalid position" << endl;
            return;
        }
    }

    if(temp->next == NULL || temp->next->next == NULL){

        Node *de = temp->next;
        temp->next = NULL;
        tail = temp;
        delete de;
        return;
    }

    Node *de = temp->next;
    temp->next = temp->next->next;
    temp->next->pre = temp;
    delete de;

}

void delete_tail(Node *&tail){
    Node *de = tail;
    tail = tail->pre;
    delete de;
    tail->next = NULL;
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

    while(1){
        int pos;
        cin >> pos;
        if(pos == -1){
            break;
        }
        delete_Node(head, tail, pos);
        print_ace(head);
        print_rev(tail);
    }

    return 0;
}