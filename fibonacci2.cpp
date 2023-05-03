#include <iostream>

using namespace std;

int main() {
    int n, a = 0, b = 1, c;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        c = a + b;
        a = b;
        b = c;

        if (a == n) {
            cout << n << " is a Fibonacci number" << endl;
            return 0;
        }
    }

    cout << n << " is not a Fibonacci number" << endl;

    return 0;
}
