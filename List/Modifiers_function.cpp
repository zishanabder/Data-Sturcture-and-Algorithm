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

    //!: Copy list;
    list<int> mylist = {10, 20, 30};
    list<int> newlist;

    newlist = mylist;                                   //* One way;
    newlist.assign(mylist.begin(), mylist.end());       //* another way;

    for(auto it: mylist){
        cout << it << " ";
    }cout << endl;

    list<int> l = {10, 20, 30, 40, 50};
    l.push_back(100);                       //!: push in back
    print(l);

    l.push_front(5);                        //!: push in front;
    print(l);

    l.pop_back();
    print(l);

    l.pop_back();
    print(l);

    l.pop_front();
    print(l);
    cout << endl << endl;

    //!: Insert part of list in another list;
    l.insert(next(l.begin(), 5), 100);         //@ Time com: O(n);
    print(l);

    
    l.insert(next(l.begin(), 2), (10, 100, 5));
    print(l);

    l.insert(next(l.begin(), 2), mylist.begin(), mylist.end());
    print(l);


    cout << endl << "ERASE:" << endl;           //! Time complexity;
    l.erase(next(l.begin(), 1));                //@ Time com: O(n);
    print(l);

    l.erase(next(l.begin(), 3), next(l.begin(), 5));
    print(l);

    cout << endl << "Replace value:" << endl;
    replace(l.begin(), l.end(), 20, 99);
    print(l);


    cout << endl << "Replace value:" << endl;
    auto it = find(l.begin(), l.end(), 100);
    cout << (it != l.end() ? "Found" : "Not Found") << endl;
    return 0;
}