#include <iostream>

using namespace std;

int main() {
    float a, b;

    cin >> a;
    cin >> b;

    cout << a << "^2 + " << b << "^2 = " << a * a + b * b << endl;

    cout << a << "^2 - " << b << "^2 = " << a * a - b * b << endl;

    cout << a << "^2 * " << b << "^2 = " << (a * a) * (b * b) << endl;

    cout << a << "^2 / " << b << "^2 = " << (a * a) / (b * b) << endl;
	return 0;
}