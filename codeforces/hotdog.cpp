#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> m(n);
    for (int i = 1; i <= n; i++) {
        cin >> m[i];
    }
    int max_discount=0;
    int temp;
    for(int i=0;i<n;i++)
    {
        if(m[i]==n){
            if(i==n)
            {
                cout<<d<<endl;
            }
        else {
        {
            max_discount=1+(n-i); 
        }
     
     temp=i;
        
    }
    for(int i=0;i<temp;i++)
    {
        if(m[i]==n-1)
        max_discount=(temp-1);
    }
    }
    }
    cout << max_discount << endl;

    return 0;
}
