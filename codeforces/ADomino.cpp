#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,col,row;
    cin>>n;
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<" "<<row;
        }
        cout<<endl;
    }
}