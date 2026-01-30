#include <iostream>
#include <typeinfo>

using namespace std;

/**
 * int - stores integers (whole numbers), without decimals, such as 123 or -123
 * double - stores floating point numbers, with decimals, such as 19.99 or -19.99
 * char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
 * string - stores text, such as "Hello World". String values are surrounded by double quotes
 * bool - stores values with two states: true or false
 */

void exampleFunction() {
    int myNumber = 10;
    int calculateMyNumber = myNumber / 20.2;
    double calculateMyNumber2 = myNumber / 20.2;
    cout << "This is the final number " << calculateMyNumber << endl;
    cout << "This is the final number2 " << calculateMyNumber2 << endl;

    char myChar = 'a';
    cout << myChar << endl;
    string myString = "This is the message which i want to store here.";
    cout << myString << endl;

    int a = 10, b = 20;
    double c = 10.1, d = 10.2;

    // Constant variable
    const int PIN_NUMBER = 10;
    cout << PIN_NUMBER << endl;

    int width = 10;
    int height = 10;

    int area = width * height;

    cout << "This is the area of the rectangle " << area << endl;

    float r = 35e10;
    cout << r << endl;

    string x = "String";
    cout << "Type of x: " << typeid(x).name() << endl;
}

int main() {
    exampleFunction();
    return 0;
}