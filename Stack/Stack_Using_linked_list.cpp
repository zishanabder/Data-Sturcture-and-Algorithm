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

class myStack{
    
    public:
    Node *head = NULL;
    Node *tail = NULL;
    int si = 0;

    void push(int n){
        si++;
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

    void pop(){
        si--;
        Node *de = tail;
        if(tail == head){
            head = NULL;
            tail = NULL;           
            delete de;
            return;
        }
        tail = tail->pre;
        tail->next = NULL;         
        delete de;
    }

    int size(){
        return si;
    }

    int top(){
        return tail->value;
    }

    bool empty(){
        return (si ? false : true);
    }

};

int main(){
    // fast_io;

    myStack st;
    
    return 0;
}