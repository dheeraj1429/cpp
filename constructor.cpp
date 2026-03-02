#include <iostream>

using namespace std;

class Line {
   public:
    double width;
    double height;

   public:
    Line(double width = 10.0, double height = 10.0) {
        this->width = width;
        this->height = height;
    }

    Line() {
        cout << "This is the default constructor" << endl;
    }

    ~Line() {
        cout << "Destructor" << endl;
    }
};

Line line1;
Line line2(10, 20);

int main() {
    return 0;
}