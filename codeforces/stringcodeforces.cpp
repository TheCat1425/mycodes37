#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        // Find the smallest character in the string
        char smallest_char = s[0];
        for (int i = 1; i < n; i++) {
            if (s[i] < smallest_char) {
                smallest_char = s[i];
            }
        }

        // Move all occurrences of the smallest character to the front
        string result = "";
        for (int i = 0; i < n; i++) {
            if (s[i] == smallest_char) {
                result = s[i] + result;
            } else {
                result += s[i];
            }
        }

        cout << result << endl;
    }
    return 0;
}
