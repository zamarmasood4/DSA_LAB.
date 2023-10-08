#include <iostream>
using namespace std;

float PI = 3.14;

int main() {
    float radius;

    cout << "Enter radius:";
    cin >> radius;

    float* ptr = &radius;

    float area = PI * (*ptr) * (*ptr);

    cout << "The area of the circle" << radius << " is: " << area << endl;

    return 0;
}

