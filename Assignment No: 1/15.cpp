#include <iostream>
using namespace std;

int main() {
    int len, wth;

    cout << "Enter the length:";
    cin >> len;

    cout << "Enter the width:";
    cin >> wth;

    int* ptrL = &len; 
    int* ptrW = &wth;   
    
    int area = (*ptrL) * (*ptrW);

    cout << "The area of the rectangle = " << area << endl;

    return 0;
}

