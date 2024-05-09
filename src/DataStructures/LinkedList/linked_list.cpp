#include <iostream>
using namespace std;

// define a node structure
struct Node {
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

// define a linked list object
class LinkedList {
    public:
        LinkedList() : head(nullptr) {}
        ~LinkedList() {
            clear();
        }

        void clear() {
            // delete all nodes
            while (head != nullptr) {
                Node* temp = head;
                head = head->next;
                delete temp;
            }
        }

        void insert(int data) {
            // to insert a new node at the end of the list
            Node* newNode = new Node(data);
            if (head == nullptr) {
                head = newNode;
            } else {
                Node* temp = head;
                while (temp->next != nullptr) {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }

        void remove(int data) {
            // to remove a node from the list
            if (head == nullptr) return;
            if (head->data == data) {
                Node* temp = head;
                head = head->next;
                delete temp;
                return;
            }

            Node* temp = head;
            while (temp->next != nullptr && temp->next->data != data) {
                temp = temp->next;
            }
            if (temp->next == nullptr) {
                cout << "Node not found" << endl;
                return;
            }

            Node* nodeToDelete = temp->next;
            temp->next = nodeToDelete->next;
            delete nodeToDelete;
        }

        void display() {
            // to print the linked list
            Node*  temp = head;
            while (temp != nullptr) {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "null" << endl;
        }

    private:
        Node* head;
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();

    list.remove(20);
    list.display();

    list.remove(10);
    list.display();
    return 0;
}
