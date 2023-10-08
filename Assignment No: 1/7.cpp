#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;

    cout << "Enter the first number:";
    cin >> n1;

    cout << "Enter the second number:";
    cin >> n2;

    cout << "Enter the third number:";
    cin >> n3;

    float* ptr1 = &n1; 
    float* ptr2 = &n2; 
    float* ptr3 = &n3; 

    float product = (*ptr1) * (*ptr2) * (*ptr3);

    cout << "Product = "<< product << endl;

    return 0;
}

