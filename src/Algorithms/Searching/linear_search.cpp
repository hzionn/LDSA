#include <iostream>
#include <vector>
using namespace std;

int linear_search(vector<int> &arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 2;

    int result = linear_search(arr, target);
    if (result == -1) {
        cout << "Element not found in the array" << endl;
    } else {
        cout << "Element fount at index " << result << endl;
    }
    return 0;
}
