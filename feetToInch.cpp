#include <iostream>
using namespace std;

int main () {
    int inch;

    cout << "enter the inch ";
    cin >> inch;

    // business logic 
    float foot = inch / 12.0f;
    cout << "Converted foot is: " << foot;

    return 0;
}