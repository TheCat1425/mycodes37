#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define st string
const st s = "codeforces";
 void solve() 
{
    
    char c;
    cin>>c;

    for(char i : s)
    {
       if(i==c)
       {
        cout<<"Yes"<<endl;
        return;
       }
    }
    cout<<"No\n";
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
     ll t;      cin>>t;
     for(ll i=1;i<=t;i++)
    {
         solve();
    }
    //solve();
}