#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
    fast_io;

    // list<int> li;

    list<int> li(5, 2);  // Declare list in O(n) time;

    cout << li.size() << endl; 

    for(auto it : li){
        cout << it << " ";
    }cout << endl;

    list<int> li1 = {1, 2, 3, 4, 5};
    for(auto it : li1){
        cout << it << " ";
    }cout << endl;

    list<int> li2(li);  // Copy list in O(n) time;
    for(auto it : li2){
        cout << it << " ";
    }cout << endl;

    int arr[5] = {10, 20, 30, 40, 50};
    list<int> li3(arr, arr+5);  // Copy array in O(n) time
    for(auto it : li3){
        cout << it << " ";
    }cout << endl;

    vector<int> v(10, 9);
    list<int> li4(v.begin(), v.end());
    for(auto it : li4){
        cout << it << " ";
    }cout << endl;

    return 0;
}