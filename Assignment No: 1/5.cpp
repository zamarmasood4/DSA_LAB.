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

    float* ptrn1 = &n1; 
    float* ptrn2 = &n2; 
    float* ptrn3 = &n3; 

    float sum = (*ptrn1) + (*ptrn2) + (*ptrn3);

    cout << "Sum = "<< sum << endl;

    return 0;
}

