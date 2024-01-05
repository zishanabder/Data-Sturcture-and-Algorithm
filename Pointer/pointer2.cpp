#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int sum_pro(int a[], int size, int *p){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += a[i];
        *p *= a[i];
    }

    return sum;
}

int main(){
    fast_io;

    int arr[] = {1, 2, 3, 4, 5};

    int a = 1; 
    int *p = &a;
    int pro, s = sum_pro(arr, 5, p);
    cout << pro << " " << s << endl;

    return 0;
}