#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define s string
 void solve() {
    
    ll n;               cin>>n;
    s st;           cin>>st;
    ll l=0,r=n-1;
    ll ans = n;
    while(l<r and st[l]!=st[r]){
        l++;
        r--;
        ans-=2;
    }
    cout << ans <<endl;
    }


int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){

         solve();
    }
}