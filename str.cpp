#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

void basicStringExample() {
    string greeting = "Hello";
    string userName = "DEMO";

    cout << greeting + " " + userName << endl;

    string firstName = "DEMO";
    string lastName = "KR";

    firstName.append(lastName);

    cout << firstName << endl;

    string x = "10";
    string y = "20";

    cout << x + y << endl;
    cout << firstName.length() << endl;
    cout << firstName.size() << endl;
    cout << firstName[0] << endl;
    cout << firstName.at(0) << endl;
    cout << firstName.at(firstName.length() - 1) << endl;
    cout << lastName.length() << endl;
    cout << lastName.at(lastName.length() - 1) << endl;
    firstName[0] = 'H';
    cout << firstName << endl;

    string emptyString = "";

    if (emptyString.empty()) {
        cout << "The string is empty" << endl;
    }

    // firstName.clear();
    // cout << firstName << endl;

    cout << firstName.front() << endl;
    cout << firstName.back() << endl;
}

void basicStringExampleTwo() {
    string firstName = "Dheeraj";
    firstName.insert(0, "Ch");
    cout << firstName << endl;
    firstName.erase(0, 2);
    cout << firstName << endl;
    firstName.replace(0, 1, "C");
    cout << firstName << endl;
    firstName.replace(0, 2, "CH");
    cout << firstName << endl;
}

void basicStringExampleThree() {
    string str = "This is the normal is string";
    cout << str.find("Th") << endl;
    cout << str.rfind("is") << endl;
    cout << str.find("is") << endl;
    cout << str.find_first_of('i') << endl;
    cout << str.find_last_of('i') << endl;

    string compareStr1 = "This";
    string compareStr2 = "This";
    cout << compareStr1.compare(compareStr2) << endl;

    string subStringOfStr = str.substr(0, 5);
    cout << subStringOfStr << endl;
}

void basicStringExampleFour() {
    string str = "This is the cpp strings";
    auto ar = str.c_str();
    cout << ar[0] << endl;

    int number = 45;
    string numberIntoTheString = to_string(number);
    cout << numberIntoTheString << endl;
    cout << typeid(numberIntoTheString).name() << endl;

    str.pop_back();
    cout << str << endl;
    str.push_back('s');
    cout << str << endl;
}

void stringConversion() {
    string str = "123";

    int num = stoi(str);
    cout << num << endl;

    long num2 = stol(str);
    cout << num2 << endl;

    float num3 = stof(str);
    cout << num3 << endl;

    double num4 = stod(str);
    cout << num4 << endl;
}

int main() {
    stringConversion();
    return 0;
}