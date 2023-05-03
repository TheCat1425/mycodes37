#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a%b);
}
void solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll x, lcd;
    if((a+1)%b==(c+1)%d)
    {
        cout<<"1"<<endl;
    }
    else
    {
        x = gcd(b,d);
        lcd=(b*d)/x;
        lcd=lcd-a%b;
        cout<<lcd<<endl;
    }
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
} 