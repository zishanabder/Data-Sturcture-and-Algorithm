#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
    fast_io;

    list<int> li = {10, 20, 30, 40, 50};
    cout << *(next(li.begin(), 3)) << endl;

    return 0;
}