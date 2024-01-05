#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

class myQueue{
    public:
    list<int> l;
    int si = 0;
    void push(int val){
        si++;
        l.push_back(val);
    }
    void pop(){
        l.pop_front();
    }
    int front(){
        return l.front();
    }
    int size(){
        return l.size();
    }
    bool isempty(){
        return l.empty();
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
    cout << "Size: " << q.size() << endl;
    while(!q.isempty()){
        cout << q.front() << " ";
        q.pop();
    }cout << endl;

    return 0;
}