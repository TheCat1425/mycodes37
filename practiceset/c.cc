
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll k;
    cin >> k;
    if(k==6)
        cout << "Yay! Farha has won the game. She is now at 100."<<"\n";
    else if(k==1)
        cout << "Alas! Farha is bitten by snake. She is now at 75."<<"\n";
    else if(k==4)
        cout << "Alas! Farha is bitten by snake. She is now at 79."<<"\n";
    else if(k==5)
        cout << "Farha is on ladder."<<"\n";
    else
        cout << "Nothing happened to her."<<"\n";
    return 0;
}