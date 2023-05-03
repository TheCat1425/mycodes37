#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin >> n;
	vector<ll> cure(n), day(n);
	for (int i = 0; i < n; i++) {
		cin >> cure[i] >> day[i];
	}
	int x = cure[0];
	for (int i = 1; i < n; i++) {
		while (cure[i] <= x) {
			cure[i] += day[i];
		}
		x = cure[i];
	}
	cout << x << '\n';

	return 0;
}