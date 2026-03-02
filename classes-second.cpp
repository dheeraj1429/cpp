#include <iostream>

using namespace std;

class Shape {
   public:
    // member prototype function
    void printFunction();

    // member function
    void printFunctionSecond() {
        cout << "This is the member function" << endl;
    }
};

void Shape::printFunction() {
    cout << "This is the simple function" << endl;
};

class Box {
   protected:
    double width;

   public:
    static int objectCount;

    Box() {
        this->objectCount++;
    }

    void setWidth(double width) {
        this->width = width;
    }

    double getWidth() {
        return this->width;
    }
};

int Box::objectCount = 0;

class SmallBox : public Box {
   public:
    void setWidth(double width) {
        this->width = width / 2;
    }
};

Box b1;
SmallBox smB1;
SmallBox smB2;

Shape s1;

int main() {
    // b1.setWidth(100.0);
    // cout << b1.getWidth() << endl;
    // smB1.setWidth(100);
    // cout << smB1.getWidth() << endl;
    // cout << Box::objectCount << endl;

    s1.printFunction();
    s1.printFunctionSecond();

    return 0;
}