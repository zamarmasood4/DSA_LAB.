#include <iostream>
using namespace std;

int main() {
    float len, hei;

    cout << "Enter the length:";
    cin >> len;

    cout << "Enter the height:";
    cin >> hei;

    float* ptrl = &len; 
    float* ptrh = &hei; 

    double area = 0.5 * (*ptrl) * (*ptrh);

    cout << "The area of triangle:" << area << endl;

    return 0;
}

