#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> &arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    // in case of the target is not in the array
    return -1;
}

int main(void) {
    // declare a vector with an initializer list
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 2;

    int result = binary_search(arr, target);
    if (result == -1) {
        cout << "Element not found in the array" << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }

    return 0;
}
