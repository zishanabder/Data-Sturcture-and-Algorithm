#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

class myStack{
    public:
    list<int> l;
    void push(int n){
        l.push_back(n);
    }
    void pop(){
        l.pop_back();
    }
    int size(){
        return l.size();
    }
    int top(){
        return l.back();
    }
    bool empty(){
        return (l.size() ? false : true);
    }
};

int main(){
    fast_io;

    myStack st;
    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        st.push(num);
    }

    cout << st.size() << endl;
    cout << st.empty() << endl;

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}