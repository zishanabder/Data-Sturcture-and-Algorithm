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

void insert_tail(Node *&head, int num){
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
    return;
}

void print(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout << tmp->value << " ";
        tmp = tmp->next;
    }cout << endl;
}

int main(){
    // fast_io;

    Node *head = NULL;
    while(1){
        int num;
        cin >> num;
        if(num != -1){
            insert_tail(head, num);
        }
        else{
            break;
        }
    }

    print(head);


    return 0;
}