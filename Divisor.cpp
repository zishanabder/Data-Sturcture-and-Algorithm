#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

//! Brute Forces    and this method time complixity is O(sqrt(n));
ll bruteForces(ll n){
    ll countdivisor = 0;
    for(ll i = 2; i < n; i++){
        if(n % i == 0){
            countdivisor++;
        }
    }
    return countdivisor;
}

//! Optimize Solution:
ll optimizeSolution(ll n){
    ll countDivisor = 0;
    for(ll i = 2; i*i < n; i++){
        if(n % 2 == 0){
            countDivisor++;

            if(i != n/i){
                countDivisor++;
            }
        }
    }
    return countDivisor;
}

//! Brute Forces:
int main(){
    ll n;
    cin >> n;

    // cout << bruteForces(n) << endl;
    cout << optimizeSolution(n) << endl;
}