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

void insert(Node *&head, Node *&tail, int v){
    Node *newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->pre = tail;
    tail = newNode;
}

void print(Node *head){
    while(head != NULL){
        cout << head->value << " ";
        head = head->next;
    }cout << endl;
}
void rev(Node *tail){
    while(tail != NULL){
        cout << tail->value << " ";
        tail = tail->pre;
    }cout << endl;
}


//! Delete NOde in Doubly Linked List in any Position: 

bool delete_pos(Node *&head, Node *&tail, int pos){

    if(head == NULL){
        cout << "Invalid" << endl;
        return false;
    }
    if(head->next == NULL && pos == 0){
        Node *de = head;
        head = NULL;
        tail = NULL;
        delete de;
        return true;
    }
    if(pos == 0){
        Node *de = head;
        head = head->next;
        head->pre = NULL;
        return true;
    }

    Node *temp = head;
    if(pos == 1){
        if(head->next == NULL){
            cout << "Invalid" << endl;
            return false;
        }
        Node *de = head->next;
        head->next = de->next;
        if(de->next != NULL){
            de->next->pre = head;  
        }
        else{
            tail = head;
        }
        return true;
    }



    for(int i = 1; i < pos; i++){
        temp = temp->next;
        if(temp == NULL){
            cout << "Invalid" << endl;
            return false;
        }
    }
    if(temp->next == NULL){
        cout << "Invalid" << endl;
        return false;
    }
    Node *de = temp->next;
    temp->next = de->next;
    if(de->next != NULL){
        de->next->pre = temp;  
    }
    else{
        tail = temp;
    }
    delete de;
    return true;

}

int main(){
    // fast_io;

    Node *head = NULL;
    Node *tail = NULL;
    int s1 = 0;

    while(1){
        int n;
        cin >> n;
        if(n == -1){
            break;
        }
        s1++;
        insert(head, tail, n);
    }
    print(head);


    while(1){
        int pos;
        cin >> pos;
        if(pos == -1){
            break;
        }

        if(delete_pos(head, tail, pos)){
            print(head);
            rev(tail);
        }
        
    }

    return 0;
}