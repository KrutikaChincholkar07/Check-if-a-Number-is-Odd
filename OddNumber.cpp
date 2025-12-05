#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 != 0) {
        cout << num << " is an Odd number";
    } else {
        cout << num << " is not an Odd number";
    }

    return 0;
}
