#include<bits/stdc++.h>
using namespace std;
#define optimize(); ios::sync_with_stdio(false); cin.tie(0);
#define ll long long int
int main() {
    ll t; cin>>t;
    while(t--)
    {
        ll n,a,b,count_a=0,count_b=0;
        cin>>n>>a>>b;
        for (int i = 1; i <= n; i++)
        {
            if(i%2==0)
            {
                count_a++;
            }
            else
            count_b++;
        }
        ll sum = a*count_a+b*count_b;
        cout<<sum<<endl;
        
    }
    return 0;
}