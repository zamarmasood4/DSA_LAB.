#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter the first number:";
    cin >> n1;

    cout << "Enter the second number:";
    cin >> n2;

    int* ptrn1 = &n1; 
    int* ptrn2 = &n2; 

    int sum = (*ptrn1) + (*ptrn2);

    cout << "Sum =  " << sum << endl;

    return 0;
}

