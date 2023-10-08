#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b;

    cout << "Enter a number: ";
    cin >> n;

	b = n; 
	
    while (n > 0) {
        int res = n % 10;
        a = (a * 10) + res;
        n /= 10;
    }

        cout << "The number " << a << " is in reverse order." << endl;

    return 0;
}

