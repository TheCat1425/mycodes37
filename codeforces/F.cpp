#include <bits/stdc++.h>
using namespace std;

int main() {
int n, d;
cin >> n >> d;
int m[n];
for (int i = 0; i < n; i++) {
    cin >> m[i];
}

int ans = 0;
int j=0;
for (int i = 0; i < n; i++) {
    while (j < n && (m[j] - m[i]) <= d) {
        j++;
    }
    ans = max(ans, j-i);
}
cout << ans << endl;

return 0;

}