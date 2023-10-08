#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number:";
    cin >> n;
    int *ptr = &n;

    for (int i = 1; i <= 10; i++) {
        cout << *ptr << " x " << i << " = " << (*ptr) * i << endl;
    }

    return 0;
}

