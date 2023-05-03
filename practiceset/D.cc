#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll t; cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if((pow(1,n/2)*(n/2))+pow(n/2,1)*1==n)
        cout<<n/2<<" "<<1<<endl;
        else
        cout<<"-1"<<endl;
    }
    return 0;
}