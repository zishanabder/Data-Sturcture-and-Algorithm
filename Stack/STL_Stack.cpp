#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){

    stack<int> st;
    while(1){
        int op;
        cin >> op;
        if(op == -1){
            break;
        }
        if(op == 1){
            cout << "Inter value: "; 
            int n;
            cin >> n;
            st.push(n);
        }
        else if(op == 2){
            if(!st.empty())
                st.pop();
        }
        else if(op == 3){
            cout << "Size: ";
            cout << st.size() << endl;
        }
        else if(op == 4){
            while(!st.empty()){
                cout << st.top() << " ";
                st.pop();
            }cout << endl;
        }

    }

    return 0;
}