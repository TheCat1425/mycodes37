#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int x = 0;
        if ((a + x) % b != 0 && (c + x) % d != 0) {
            x++;
        }
        cout << x << endl;
    }
    return 0;
}
