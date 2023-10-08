#include <iostream>
using namespace std;

int main() {
    float n1, n2;

    cout << "Enter first number:";
    cin >> n1;

    cout << "Enter second number:";
    cin >> n2;

    if (n2 == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 1; 
    }

    float* ptr1 = &n1; 
    float* ptr2 = &n2;  

    float ans = (*ptr1) / (*ptr2);

    cout << "Answer = "<< ans << endl;

    return 0;
}

