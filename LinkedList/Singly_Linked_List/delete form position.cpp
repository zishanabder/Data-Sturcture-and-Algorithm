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

    Node *tmp = head;
    while(tmp != NULL){
        cout << tmp->value << " ";
        tmp = tmp->next;
    }cout << endl;
}

void insert_in_tail(Node *&head, int num){
    Node *newNode = new Node(num);

    if(head == NULL){
        head = newNode;
        return;
    }
    Node *tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void delete_position(Node *&head, int po){
    
    if(head == NULL){
        return;
    }

    if(po == 1){
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    
    Node *tmp = head;
    int i = 0;
    for(i = 1; i < po-1 && tmp->next != NULL; i++){
        tmp = tmp->next;
        //* OR: for terminate invalue position;
        /* if(tmp == NULL){
            cout << "Invalid index" << endl;
            return;
        } */
    }
    if(i < po-1){
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
   
}

int main(){
    // fast_io;

    Node *head = NULL;
    while(1){
        cout << "1: insert\n2: print\n3: delete\n4: terminate" << endl;
        int op;
        cin >> op;
        if(op == 1){
            int num;
            cin >> num;
            insert_in_tail(head, num);
        }
        else if(op == 2){
            print(head);
        }
        else if(op == 3){
            cout << "Enter po" << endl;
            int po;
            cin >> po;
            delete_position(head, po);
        }
    }

    return 0;
}