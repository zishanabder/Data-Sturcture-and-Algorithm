#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int v) {
        this->value = v;
        this->next = NULL;
    }
};

void print_linked_list(Node *head) {
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->value <<  " ";
        tmp = tmp->next;
    }cout << endl;
}

void insert_at_tail(Node *head, int v) {

    Node *newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
    }

    Node *tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }

    tmp->next = newNode;
}

int main() {
    fast_io;


    Node* head = NULL;
    cout << "OPtion 1: Insert at tail" << endl;
    int op;
    cin >> op;
    if (op == 1) {
        int v;
        cin >> v;
        insert_at_tail(head, v);
    }
    print_linked_list(head);

    return 0;
}