#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll x,count=0;
    cin>>x;
    ll sum=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i!=0)
        {
            sum+=(x%i);
        }
    }
    cout<<sum<<endl;
    return 0;
}
