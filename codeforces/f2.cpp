#include<bits/stdc++.h>
using namespace std;
#define optimize(); ios::sync_with_stdio(false); cin.tie(0);
#define ll long long int
int main() {
    optimize();
    int n,d,count=1,ans=0;
    int j=0,k=0;
    cin>>n>>d;
    vector<int>array1(n,0),array2(n,0);

    for(int i=0;i<n;i++)
    {
       int x;
       cin>>x;
       array1[i]=x;
    }
    for(int i=1;i<n;i++)
    {
        if(array1[i]<=array1[j])
        {
            count++;
        }
        else
        {
            array2[k]=(count);
            k++;
            j=i;
            count=1;
        }
    }
    k++;
    array2.push_back(count);
    sort(array2.begin(),array2.end(),greater<int>());

    for(int i=0;i<d;i++)
    {
        ans+=array2[i];
    }

    cout<<ans<<endl;
    return 0;
}