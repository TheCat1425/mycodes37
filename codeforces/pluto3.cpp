#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;

    vector<ll> a(n), b(n);
    ll sum_a = 0, sum_b = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum_a += a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        sum_b += b[i];
    }
    if(sum_b>=sum_a){
    ll operations = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            operations += b[i] - a[i];
        }
    }
    cout << operations << endl;
    }
    else 
    cout<<"-1"<<endl;
    
    return 0;
}
