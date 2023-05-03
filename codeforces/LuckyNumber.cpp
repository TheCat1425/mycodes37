#include<bits/stdc++.h>
using namespace std;
#define optimize(); ios::sync_with_stdio(false); cin.tie(0);
#define ll long long int
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,j,sum;
        cin>>n>>j;
        ll temp3= n/10;
        ll temp4 = n%10;
        ll sum2 = temp4 - temp3;
        for(int i=n+1;i<=j;i++)
        {
            ll temp;
            temp = i/10;
            ll temp2;
            temp2=i%10;
             sum= temp-temp2;
             if(sum>sum2)
             sum = sum2;
        }
        cout<<sum2<<endl;
    }
    return 0;
}