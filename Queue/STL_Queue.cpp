#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
    fast_io;

    queue<int> q;
    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        q.push(num);
    }
    cout << "Size: " << q.size() << endl;
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }cout << endl;

    return 0;
}