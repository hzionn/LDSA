#include <iostream>
using namespace std;

int main() {
    int myArray[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        cout << myArray[i] << endl;
    }

    char strArray[6] = "hello";

    for (int i = 0; i < 6; i++) {
        cout << strArray[i] << endl;
    }

    cout << strArray[0] << " ";
    cout << strArray[1] << " ";
    cout << strArray[2] << " ";

    return 0;
}
