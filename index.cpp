#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input\n";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        cout << string(i, '*')
             << string(2 * (n - i), ' ')
             << string(i, '*') << endl;
    }

    for (int i = n; i >= 1; i--) {
        cout << string(i, '*')
             << string(2 * (n - i), ' ')
             << string(i, '*') << endl;
    }
}
