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

int main(){
    fast_io;

    Node a(10);
    Node b(20);

    a.next = &b;
    
    cout << &(a.value) << " " << a.value  << " " << a.next << endl;
    cout << &(b.value) << " " << b.value  << " " << b.next << endl;

    cout << a.next->value << endl;

    return 0;
}