#include<bits/stdc++.h>
using namespace std;
#define optimize(); ios::sync_with_stdio(false); cin.tie(0);
#define ll long long int
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,d;
        cin>>n>>d;
        string s;
        cin>>s;
        int flag=-1;
        for(int i=0;i<n;i++)
        {
            if(flag==-1)
            {
                if(s[i]-'0'<d)
                {
                    flag=1;
                    cout<<d;
                }
            }
            cout<<s[i];
        }
        if(flag==-1)
        {
            cout<<d<<endl;
        }
        else {cout<<endl;}
    }
    return 0;
}