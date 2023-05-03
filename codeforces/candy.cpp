#include<bits/stdc++.h>
using namespace std;
#define optimize(); ios::sync_with_stdio(false); cin.tie(0);
#define ll long long int
void solve(){  
            int n;
            cin >> n;
 
            if(n % 2 == 0){
                cout << -1 << endl;
                return;
            }
            else{
                vector<int>ans;
                int f = 0;
                for(int i = 29; i >= 1; --i){
                    if((n>>i) & 1){
                        f = 1;
                        ans.push_back(2);
                    }
                    else if(f){
                        ans.push_back(1);
                    }
                }
                cout << ans.size() << endl;
            for(auto i : ans){
                cout << i << " ";
            }
            cout << endl;
            }
    } 
 
    int main(){
  
            int t;
            cin>>t;
            while(t--){
                    solve();
            } 
 
            return 0;       
    }
