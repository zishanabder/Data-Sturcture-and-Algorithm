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
};

int main(){
    fast_io;

    Node a, b;
    a.value = 10;
    a.next = &b;

    b.value = 20;
    b.next = NULL;

    cout << &(a.value) << " " << a.value  << " " << a.next << endl;
    cout << &(b.value) << " " << b.value  << " " << b.next << endl;

    cout << a.next->value << endl;

    return 0;
}