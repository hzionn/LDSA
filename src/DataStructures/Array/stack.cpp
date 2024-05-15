#include <iostream>
using namespace std;

const int MAX_SIZE = 1000;

class Stack {
private:
    int top;
    int arr[MAX_SIZE];

public:
    Stack() {top = -1;}

    bool push(int x) {
        if (top >= (MAX_SIZE - 1)) {
            cout << "Stack Overflow" << std::endl;
            return false;
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack\n";
            return true;
        }
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
            return 0;
        } else {
            int x = arr[top--];
            return x;
        }
    }

    bool isEmpty() {
        return top < 0;
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is Empty" << endl;
            return 0;
        } else {
            return arr[top];
        }
    }

    void print() {
        if (top < 0) {
            cout << "Stack is Empty" << endl;
        } else {
            for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    cout << stack.pop() << " popped from stack" << endl;
    cout << "top element is " << stack.peek() << endl;
    stack.print();

    return 0;
}
