#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<pair<int, int>> stars(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        stars[i] = {x, y};
    }

    vector<pair<int, int>> black_holes(m);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        black_holes[i] = {x, y};
    }

    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int count = 0;
        for (auto star : stars) {
            if (star.first >= x1 && star.first <= x2 && star.second >= y1 && star.second <= y2) {
                bool survive = true;
                for (auto hole : black_holes) {
                    if (star.first >= hole.first - 1 && star.first <= hole.first + 1 &&
                        star.second >= hole.second - 1 && star.second <= hole.second + 1) {
                        survive = false;
                        break;
                    }
                }
                if (survive) {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
