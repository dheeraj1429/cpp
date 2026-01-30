#include <iostream>

using namespace std;

void takeInputExampleFirst() {
    string firstName, lastName;
    cout << "Please enter your first name: ";
    cin >> firstName;
    cout << "PLease enter your last name: ";
    cin >> lastName;

    cout << "Hello, " << firstName << " " << lastName << " Welcome to cpp" << endl;
}

int main() {
    takeInputExampleFirst();
    return 0;
}