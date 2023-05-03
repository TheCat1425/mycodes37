#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define optimize(); ios::sync_with_stdio(false); cin.tie(0);
int main() {
    optimize();
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        char first = str[0];
        int first_count = 1;
        char second = ' ';
        int second_count = 0;
        for(int i = 1; i<=3; i++){
            if(str[0] != str[i]){
                if(second == ' '){
                    second = str[1];
                    second_count ++;
                }else if(second == str[i]){
                    second_count ++;
                }
            }else{
                first_count ++;
            }
        }
        if(first_count == 4){
            cout << -1 << '\n';
        }else if(first_count == 3 || second_count == 3){
            cout << 6 << '\n';
        }else{
            cout << 4 << '\n';
        }
    }
    return 0;
}