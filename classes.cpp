#include <iostream>

using namespace std;

class Math {
   public:
    static int square(int num) {
        return num * num;
    };
};

class Player {
   private:
    string name;
    int health;
    double xp;

   public:
    Player& updateXp(double newXp) {
        this->xp += newXp;
        cout << this->xp << endl;
        return *this;
    }
};

class Shape {
   public:
    inline static int objectCount = 0;

    Shape() {
        objectCount++;
    }

    static int getObjectCount() {
        return Shape::objectCount;
    }
};

void classExample1() {
    class Box {
       private:
        double length;
        double height;
        double breadth;

       public:
        double getVolume() {
            return this->length * this->height * this->breadth;
        }

        void setLength(double len) { this->length = len; }
        void setHeight(double hei) { this->height = hei; }
        void setBreadth(double bre) { this->breadth = bre; }
    };

    Box Box1;

    Box1.setLength(10.5);
    Box1.setHeight(6.0);
    Box1.setBreadth(7.0);

    cout << Box1.getVolume() << endl;
}

int main() {
    Player p1;

    int a = 10;
    int& ref_a = a;
    cout << a << endl;
    ref_a += 100;
    cout << a << endl;

    p1.updateXp(10).updateXp(20).updateXp(40);

    // cout << Math::square(10) << endl;

    // Shape s1;
    // Shape s2;
    // Shape s3;

    // cout << Shape::getObjectCount() << endl;
    // cout << s1.getObjectCount() << endl;

    return 0;
}