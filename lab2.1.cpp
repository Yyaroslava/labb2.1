#include <iostream> 
#include <cmath>

using namespace std;

int main()
{
    const double PI = 4 * atan(1.0); // число Пі
    double a;  // вхідний параметр 
    double z1; // результат обчислення 1-го виразу
    double z2; // результат обчислення 2-го виразу 

    cout << "a =  "; cin >> a;

    z1 = sin((PI / 2.0) + 3 * a) / (1 - sin(3 * a - PI));

    z2 = 1 / tan((5.0 / 4.0) * PI + (3.0 / 2.0) * a);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}
