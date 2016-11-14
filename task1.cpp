#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int num;
    float a;
    cout << "Insert number: ";
    cin >> num;
    cout << "Insert a real number: ";
    cin >> a;
    float number;
    number = pow(num,a);
    cout << num << '^' << a << '=' << number;
    system("pause");
    return 0;
}
