#include<bits/stdc++.h>
using namespace std;
#define optimize(); ios::sync_with_stdio(false); cin.tie(0);
#define ll long long int

void solve(){
    string s;
        cin>>s;
        map<char,int> mp;
        for(auto i:s){
            mp[i]++;
        }
        int x= mp.size();
        if(x==1){
            cout <<-1<<endl;
           return;
        }
        if(x==4 or x==3)
        {
            cout<<4<<endl;
            return;
        }
        auto i=*(mp.begin());
        int y=i.second;
        if(y==1 or y==3){
            cout<<6<<endl;
        }
        else{
            cout<<4<<endl;
        }
    }
int main() {
    optimize();
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}