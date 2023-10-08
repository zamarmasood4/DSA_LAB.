#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number:";
    cin >> n;

    int* ptr = &n;

    int len = 0;

    while (*ptr != 0) {
        *ptr /= 10; 
        len++;
    }

    cout << "The length of the number = "<< len << endl;

    return 0;
}

