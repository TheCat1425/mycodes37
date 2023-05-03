#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;

int n;
string s;
int pi[MAXN];

void build_pi() {
    int m = s.size();
    pi[0] = pi[1] = 0;
    for (int i = 2; i <= m; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i-1] != s[j]) j = pi[j];
        if (s[i-1] == s[j]) j++;
        pi[i] = j;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    cin.ignore();
    while (n--) {
        int t;
        cin >> t;
        if (t == 0) {
            string x;
            cin >> x;
            s += x;
            build_pi();
        } else {
            int m = s.size();
            int k = m - pi[m];
            if (m % k == 0 && k != m) {
                cout << k << '\n';
            } else {
                cout << m << '\n';
            }
        }
    }
    return 0;
}
