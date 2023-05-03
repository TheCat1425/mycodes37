#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    
        string u,s;
        int n;
        cin>>n>>u;

        for(int i=0;i<n;){
            char x = u[i];
            int cnt =0;
            while(i<n && u[i]==x)
            {
                cnt++;
                i++;
            }
            if(cnt&1) s.push_back(x);
            else{
                s.push_back(x);
                s.push_back(x);
            }
        }

        cout<<s<<endl;
}
int main(){

    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}
