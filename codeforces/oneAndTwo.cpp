#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int two=0;
        for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==2) two++;
        }
        if(two%2) cout<<-1<<endl;
        else {
            int currentTwo=0;
            int index = -1;
            for(int i =0;i<n;i++){
                if(a[i]==2) currentTwo++;
                if(currentTwo==two/2){
                    index = i+1;
                    break;
                }
            }
            cout<<index<<endl;
        }
    }
}