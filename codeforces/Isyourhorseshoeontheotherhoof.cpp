#include <bits/stdc++.h>
#define optimize(); ios::sync_with_stdio(false); cin.tie(0);
#define ll long long int

using namespace std;

int main() {
   vector<ll> v(4);
   for(ll i=0;i<4;i++)
   {
    cin>>v[i];
   }
   int dup=0;
   sort(v.begin(), v.end());
   for(ll i=0;i<4;i++)
   {
    if(v[i]==v[i+1])
    {
        dup++;
    }
   }
   cout<<dup<<endl;
   return 0;
}
