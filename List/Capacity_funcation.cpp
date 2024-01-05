#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
    fast_io;

    list<int> mylist = {10, 20, 30};
    cout << mylist.max_size() << endl;
    cout << mylist.size() << endl;      // @: Size();

    mylist.resize(2);
    mylist.resize(5, 100);          
    for(auto it: mylist){
        cout << it << " ";
    }cout << endl;

    mylist.clear();
    cout << mylist.size() << endl;

    return 0;
}