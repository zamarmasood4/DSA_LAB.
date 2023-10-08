#include <iostream>
using namespace std;

int main() {
    float n1, n2;

    cout << "Enter the first number:";
    cin >> n1;

    cout << "Enter the second number:";
    cin >> n2;

    float* ptr1 = &n1; 
    float* ptr2 = &n2; 

    float ans = (*ptr1) - (*ptr2);

    cout << "Answer = "<< ans << endl;

    return 0;
}

