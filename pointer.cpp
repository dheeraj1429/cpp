#include <iostream>

using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void pointerExample6() {
    int a = 100;
    int& ref_a = a;

    cout << &ref_a << endl;
    cout << &a << endl;

    a += 100;
    cout << ref_a << endl;

    int x = 10;
    int y = 20;
    swap(&x, &y);

    cout << x << " " << y << endl;
}

void createArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 10 * i;
    }
}

void pointerExample5() {
    int number[5];
    createArray(number, 5);

    for (int i = 0; i < 5; i++) {
        cout << number[i] << endl;
    }
}

void calculateSum(int* a, int* b, int* sum) {
    *sum = *a + *b;
}

void pointerExample4() {
    int x = 10;
    int y = 20;
    int sum;

    cout << "Before update " << sum << endl;

    calculateSum(&x, &y, &sum);

    cout << "After update " << sum << endl;
}

void pointerExample3() {
    int a = 200;
    int* ptr_a = &a;
    int** ptr_ptr_a = &ptr_a;

    cout << *ptr_ptr_a << endl;
    cout << ptr_a << endl;
    cout << &a << endl;

    cout << *(*ptr_ptr_a) << endl;
    cout << *ptr_a << endl;
    cout << a << endl;

    *(*ptr_ptr_a) = 300;

    cout << a << endl;
}

void pointerExample2() {
    int a = 100;
    int* ptr_a;

    ptr_a = &a;

    // Both pointing to the same memory
    cout << ptr_a << endl;
    cout << &a << endl;

    // Both are same
    cout << a << endl;
    cout << *&a << endl;

    // Both pointing to the same memory
    cout << *ptr_a << endl;
    cout << a << endl;

    cout << &ptr_a << endl;
    cout << &a << endl;
}

void pointerExample1() {
    int a = 10;
    int* ptr_a = &a;

    cout << *ptr_a << endl;
    cout << *(&a) << endl;
}

int main() {
    pointerExample6();
    return 0;
}