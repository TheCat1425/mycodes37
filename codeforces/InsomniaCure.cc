#include<bits/stdc++.h>
using namespace std;
#define optimize(); ios::sync_with_stdio(false); cin.tie(0);
#define ll long long int
int main() {
    ll k,l,m,n,d,count=0;
    cin>>k>>l>>m>>n>>d;
    for(int i=1;i<=d;i++)
    {
        if(i%k==0||i%l==0||i%m==0||i%n==0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}