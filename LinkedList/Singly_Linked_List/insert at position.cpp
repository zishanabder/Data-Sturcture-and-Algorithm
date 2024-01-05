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

void print_linkedlist(Node *head){
    cout << "The linkedList is: ";
    Node *temp = head;
    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->next;
    }cout << endl;
}


void insert_at_any_position(Node *&head, int pos, int v){
    Node *newNode = new Node(v);
    
    
    if(head == NULL){
        head = newNode;
        return;
    }
    
    if(pos == 1){

        newNode->next = head;
        head = newNode;
        return;        
    }
    
    Node *temp = head;
    int i = 0;
    for(i = 1; i < pos-1 && temp->next != NULL; i++){
        temp = temp->next;
        //* OR: for terminate invalue position;
        /* if(temp == NULL){
            cout << "Invalid index" << endl;
            return;
        } */
    }
    if(i < pos - 1){
        return;
    }
    Node *right = temp->next;
    temp->next = newNode;
    newNode->next = right;

}


void insert_at_tail(Node *&head, int v){
    Node *newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node *temp = head;
    int t = 1;
    while(temp-> next != NULL){
        temp = temp->next;
        t++;
    }
    // cout << temp->value << endl;
    cout << t << endl;
    temp->next = newNode;
}


int main(){
    // fast_io;

    Node *head = NULL;
    while(1){
        cout << endl;
        cout << "1: insert at tail" << endl;
        cout << "2: insert at any position" << endl;
        cout << "3: Print" << endl;
        cout << "4: Terminate" << endl;
        cout << endl;

        int op;
        cin >> op;
        if(op == 1){
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }

        else if(op == 2){
            int pos, v;
            cout << "Enter position: " << endl;     cin >> pos;
            cout << "Enter value: " << endl;        cin >> v;
            
            insert_at_any_position(head, pos, v);
        }

        else if(op == 3){
            print_linkedlist(head);
        }

        else if(op == 4){
            break;
        }
    }

    return 0;
}