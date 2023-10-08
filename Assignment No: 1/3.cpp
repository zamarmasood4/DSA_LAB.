#include <iostream>
using namespace std;

int main() {
    float len;

    cout << "Enter the length:";
    cin >> len;

    float* ptrl = &len;

    double area = (*ptrl) * (*ptrl);

    cout << "The area is "<< area << endl;

    return 0;
}

