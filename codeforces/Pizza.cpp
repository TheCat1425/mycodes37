#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, theta;
        cin >> r >> theta;

        int n = 360/theta;
        if (n % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
