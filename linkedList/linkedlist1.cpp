#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = nullptr; // Ensure the next pointer is initialized to nullptr
    }
};

void printList(Node*& head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        temp = temp->next;
        if (temp != nullptr) {
            cout << " -> ";
        }
    }
    cout << endl;
}

void insert(Node*& head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertLast(Node*& tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

int main() {
    Node* node1 = new Node(1);
    
    Node* head = node1;
    Node* tail = node1;

    // Add debug information
    cout << "Initial head: " << head->data << ", Initial tail: " << tail->data << endl;

    // Insert nodes
    insertLast(tail, 2);
    insertLast(tail, 3);
    insertLast(tail, 4);
    insertLast(tail, 5);

    // Print final linked list
    cout << "Final linked list: ";
    printList(head);

    return 0;
}
