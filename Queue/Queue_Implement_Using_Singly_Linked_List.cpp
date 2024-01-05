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
        Node *next;
    Node(int n){
        this->value = n;
        this->next = NULL;
    }
};

class myQueue{

    public:
        Node *head = NULL;
        Node *tail = NULL;
        int si = 0;

    void push(int n){
        Node *newNode = new Node(n);
        si++;
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop(){
        si--;
        if(head == tail){
            Node *de = head;
            head = NULL;
            tail = NULL;
            delete de;
            return;
        }
        Node *de = head;
        head = head->next;
        delete de;
    }

    int top(){
        return head->value;
    }

    int size(){
        return si;
    }

    bool isempty(){
        return (si) ? false : true;
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

    cout << endl;
    while(!q.isempty()){
        cout << q.top() << " ";
        q.pop();
    }cout << endl;

    return 0;
}