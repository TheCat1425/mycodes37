#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = -1;
        for (int x = 0; x < 28; x++) {
            int res = 0;
            for (int i = 0; i < n; i++) {
                res ^= (a[i] ^ x);
            }
            if (res == 0) {
                ans = x;
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
