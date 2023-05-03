#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    vector<int> nodes(n);
    for (int i = 0; i < n; i++) {
        nodes[i] = i;
    }

    int ans = INF;
    do {
        int cost = 0;
        bool valid = true;
        for (int i = 0; i < n - 1; i++) {
            if (graph[nodes[i]][nodes[i+1]] == 0) {
                valid = false;
                break;
            }
            cost += graph[nodes[i]][nodes[i+1]];
        }
        if (valid && graph[nodes[n-1]][nodes[0]] != 0) {
            cost += graph[nodes[n-1]][nodes[0]];
            ans = min(ans, cost);
        }
    } while (next_permutation(nodes.begin()+1, nodes.end()));

    cout << ans << endl;
    return 0;
}
