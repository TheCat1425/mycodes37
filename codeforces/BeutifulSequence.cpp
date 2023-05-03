
#include<bits/stdc++.h>
using namespace std;
#define optimize(); ios::sync_with_stdio(false); cin.tie(0);
#define ll long long int

void solve0()
{
    int n; cin>>n;

        int solve[n];
        for(int i=1;i<=n;i++)
        {
            cin>>solve[i];
        }
        for(int i=1;i<=n;i++)
    {
        if(solve[i]<=i)
        {
            cout<<"YES"<<endl;
            return;
        }
        
}
    cout<<"NO"<<endl;
}
int main() {
    int t; cin>>t;
    while(t--)
    {
        solve0();
    }
    }
