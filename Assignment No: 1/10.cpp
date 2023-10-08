#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 5, 3, 7, 5, 8}; 
    int *ptr = arr; 
    int len = 0;
    while (*ptr != arr[6]) {
        len++;
        ptr++;
    }

    cout << "The length of the array is: " << len << endl;

    return 0;
}

