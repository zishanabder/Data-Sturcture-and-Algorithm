#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

void print(list<int> &l){
    for(auto it: l){
        cout << it << " ";
    }cout << endl;
}

int main(){
    fast_io;

    cout << endl << "Remove Operation::" << endl;     //@ TC: O(n);
    list<int> li = {10, 20, 30, 40, 50, 10};
    li.remove(10);
    print(li);


    cout << endl << "Sort Operation::" << endl;     //@ TC: O(logn);
    li.sort();
    print(li);

    li.sort(greater<int>());
    print(li);


    cout << endl << "Unique Opre::" << endl;      
    li.unique();
    print(li);


    cout << endl << "Reverse Opre::" << endl;      
    li.reverse();
    print(li);
    
    return 0;
}