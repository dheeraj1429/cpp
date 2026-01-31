#include <iostream>

using namespace std;

void basicMath() {
    int a = 10;
    // primarily used for integer types (int, long, long long).
    // It is declared in the <cstdlib> header and returns the absolute value of an integer.
    int b = fabs(a);
    long c = fabs(a);
    long long d = fabs(a);

    double nm = 10;
    cout << pow(nm, 2) << endl;
    cout << sqrt(nm) << endl;
    cout << ceil(10.2) << endl;
    cout << floor(10.8) << endl;
    cout << round(10.8) << endl;
    cout << round(10.4) << endl;
    cout << trunc(10.0124) << endl;

    cout << max(10, 20) << endl;
    cout << min(10, 20) << endl;

    cout << numeric_limits<int>::min();
    cout << " " << numeric_limits<int>::max() << endl;

    cout << numeric_limits<double>::min();
    cout << " " << numeric_limits<double>::max() << endl;

    cout << numeric_limits<float>::min();
    cout << " " << numeric_limits<float>::max() << endl;

    int randomNumber = rand();
    cout << randomNumber << endl;

    float f = 10.12;
    cout << f << endl;
    int z = static_cast<int>(f);
    cout << z << endl;

    cout << to_string(f) << endl;
}

int main() {
    basicMath();
    return 0;
}