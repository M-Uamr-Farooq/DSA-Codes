#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// LinkedList class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Insert a new node at the end
    void insert(int value) {
        Node* newNode = new Node(value);
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

    // Print the linked list
    void print() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    // Get the head node
    Node* getHead() {
        return head;
    }
};

int main() {
    LinkedList list;

    // Insert values into the linked list
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    // Print the linked list
    cout << "Linked List: ";
    list.print();

    // Debugging: Check the visualizer by observing 'list' or 'list.getHead()'
    return 0;
}
