#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
    fast_io;

    int x = 5;
    int *p;
    p = &x;

    int **q = &p;

    cout << *p  << " " << **q  << " " << p << " " << q << endl;
    return 0;
}