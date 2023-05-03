#include<bits/stdc++.h>
using namespace std;
#define optimize(); ios::sync_with_stdio(false); cin.tie(0);
#define ll long long int
int main() {
    optimize();
    int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		if (a % b == 0) cout << 0 << endl;
		else cout << b - a % b << endl;
	}
	
	return 0;
}