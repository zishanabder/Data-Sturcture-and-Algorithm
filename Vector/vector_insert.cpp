#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
    fast_io;

   vector<int> v={1,2,3,4,5};
v.erase(v.begin()+2, v.end());
    for(auto it: v){
        cout << it << " ";
    }

    return 0;
}