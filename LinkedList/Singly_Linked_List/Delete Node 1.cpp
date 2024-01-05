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

void insert(Node *&head, int n){
    Node *newNode = new Node(n);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void print(Node *head){
    while(head != NULL){
        cout << head->value << " ";
        head = head->next;
    }cout << endl;
}

void delete_node(Node *head, int pos){
    if(head == NULL){
        return;
    }
    
    Node *temp = head;
    for(int i = 1; i <= pos - 1; i++){
        temp = temp->next;
        if(temp == NULL){
            return;
        }
    }
    Node *de = temp->next;
    temp->next = temp->next->next;
    delete de;


}

int main(){
    // fast_io;
    Node *head = NULL;
    while(1){
        int n;
        cin >> n;
        if(n == -1){
            break;
        }
        insert(head, n);
    }

    while(1){
        int po;
        cin >> po;
        if(po == -1){
            break;
        }

        delete_node(head, po);
        print(head);

    }
    

    return 0;
}