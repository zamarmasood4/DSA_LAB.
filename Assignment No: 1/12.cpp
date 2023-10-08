#include <iostream>
using namespace std;

int main() {
    int n[100]; 
    int *ptr = n; 

    for (int i = 1; i <= 100; i++) {
        *ptr = i;
        ptr++;
    }

    ptr = n;

    for (int i = 0; i < 100; i++) {
        cout << *ptr << " ";
        ptr++;
    }

    cout << endl;

    return 0;
}

