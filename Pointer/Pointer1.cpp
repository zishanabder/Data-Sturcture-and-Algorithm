#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
    fast_io;

    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int *p = &arr[10];
    int *q = &arr[0];

    int ans = p - q;
    cout << ans << endl;

    char *ch;
    cout << sizeof(p) << endl;
    cout << sizeof(ch) << endl;

    return 0;
}