#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node *pre;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

class myQueue{
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
        Node *de = head;
        if(head == tail){
            head = NULL;
            tail = NULL;
            delete de;
            return;
        }
        head = head->next;
        head->pre = NULL;
        delete de;
    }
    int top(){
        return head->val;
    }
    int size(){
        return si;
    }

    bool isempty(){
        return (si ? false : true);
    }
};

int main(){
    fast_io;

    myQueue q;
    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        q.push(num);
    }
    while(!q.isempty()){
        cout << q.top() << " ";
        q.pop();
    }cout << endl;



    return 0;
}