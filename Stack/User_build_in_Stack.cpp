#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

class myStack{
    public:
    vector<int>v;
    void push(int n){
        v.push_back(n);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return (v.size() ? false : true);
    }

};

int main(){
    fast_io;

    myStack st;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        st.push(num);
    }

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}