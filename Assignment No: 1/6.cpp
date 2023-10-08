#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;

    int* ptr1 = &n1; 
    int* ptr2 = &n2; 

    int product = (*ptr1) * (*ptr2);

    cout << "Product = "<< product << endl;

    return 0;
}

