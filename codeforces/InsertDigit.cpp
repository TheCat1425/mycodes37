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
    string s; cin>>s;
    string ans ="";
    bool flag = true;
    for(int i=0;i<n;i++)
    {
        int temp = (s[i]-'0');
        if(d>temp)
        {
            ans += to_string(d);
            flag = false;
            for(int j=i;j<n;j++) ans+=s[j];
            break;
        }
       else  ans+=s[i];
    }
    if(flag) ans += to_string(d);
    cout<<ans<<endl;
    }
    return 0;
}