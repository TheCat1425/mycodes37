#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
const int INF = 1e9 + 5;



void dijkstra(int src, int dist[]) {
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    for (int i = 1; i <= n; i++) dist[i] = INF;
    dist[src] = 0;
    pq.push({0, src});
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        for (auto [v, w] : adj[u]) {
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        vector<pair<int,int>> adj[MAXN];
int dist1[MAXN], dist2[MAXN];
int n, c;
    int u, v, w;
    cin >> n >> c;
    for (int i = 1; i < n; i++) {
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    dijkstra(1, dist1);  
    dijkstra(n, dist2);  
    int ans = accumulate(dist1 + 1, dist1 + n + 1, 0);
    for (int u = 1; u <= n; u++) {
        for (auto [v, w] : adj[u]) {
            int new_cost = dist1[u] + dist2[v] + w + c;
            ans = min(ans, new_cost);
        }
    }
    cout << ans << '\n';
    return 0;
}
