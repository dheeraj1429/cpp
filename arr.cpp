
#include <algorithm>
#include <array>
#include <iostream>
#include <vector>

using namespace std;

void exampleFirst() {
    int nums[5] = {1, 2, 3, 4, 5};
    cout << "This is the first element in the array: " << nums[0] << endl;
    cout << "This is the third element in the array: " << nums[2] << endl;

    int size = sizeof(nums) / sizeof(nums[1]);
    cout << "The size of the array is: " << size << endl;

    for (int i = 0; i < size; i++) {
        cout << "Curent number: " << nums[i] << " " << "Current index: " << i << endl;
    }

    int matrix[2][3] = {
        {1, 2, 3},
        {1, 2, 3}};
    cout << "Matrix: " << matrix[0][0] << endl;
}

void exampleSecond() {
    // array<int, 5> arr = {};
    // cout << sizeof(arr) << endl;

    // int size = sizeof(arr) / sizeof(arr[0]);
    // cout << size << endl;

    // for (int i = 0; i < size; i++) {
    //     arr[i] = i * 5;
    // }

    // cout << arr[0] << endl;
    // arr.fill(10);

    // int nums[2] = {1, 2};
    // swap(nums[0], nums[1]);
    // cout << nums[0] << endl;
    // cout << nums[1] << endl;

    // array<int, 5> arr = {1, 2, 3, 4, 5};
    // cout << arr.at(2) << endl;
    // cout << arr.front() << endl;
    // cout << arr.back() << endl;

    int arr[] = {1, 3, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Reverse the array arr
    reverse(arr, arr + n);

    for (auto i : arr)
        cout << i << " ";
}

void exampleThree() {
    vector<int> vec = {1, 2, 3};

    // Access
    cout << vec.at(2) << endl;
    cout << vec[2] << endl;
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.data() << endl;
    vec.assign(2, 7);
    cout << vec.at(1) << endl;

    // Capacity
    cout << vec.size() << endl;
    vec.push_back(10);
    vec.push_back(20);
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    vec.push_back(12);
    vec.push_back(2);
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    cout << vec.empty() << endl;

    vector<int> v = {1, 2};
    v.resize(4, 100);
    cout << v.at(0) << endl;
    cout << v.at(1) << endl;
    cout << v.at(2) << endl;
    cout << v.at(3) << endl;
    cout << v.capacity() << endl;
    cout << v.size() << endl;

    // Add/Remove
    v.push_back(10);
    cout << v.back() << endl;
    v.pop_back();
    cout << v.back() << endl;
    // v.clear();
    v.insert(vec.begin(), 10);
    v.erase(vec.begin());
}

void exampleFour() {
    vector<int> vec = {30, 10, 50, 20, 40};
    sort(vec.begin(), vec.end());
    cout << *vec.begin() << endl;
    sort(vec.begin(), vec.end(), greater<int>());
    cout << vec.at(0) << endl;

    reverse(vec.begin(), vec.end());
    cout << vec.at(0) << endl;
    // auto min_it = min_element(vec.begin(), vec.end());
    // cout << *min_it << endl;

    // auto max_it = max_element(vec.begin(), vec.end());
    // cout << *max_it << endl;

    // auto [min_it, max_it] = minmax_element(vec.begin(), vec.end());
    // cout << *min_it << endl;
    // cout << *max_it << endl;
}

void modifying() {
    vector<int> vec(5);
    fill(vec.begin(), vec.end(), 7);

    // for (int i = 0; i < vec.size(); i++) {
    //     cout << vec.at(i) << " ";
    // }

    vector<int> vec2(3);
    vector<int> vec2(vec.size());
    copy(vec.begin(), vec.end(), vec2.begin());

    for (int i = 0; i < vec2.size(); i++) {
        cout << vec2.at(i) << " ";
    }
}

int main() {
    modifying();
    return 0;
}
