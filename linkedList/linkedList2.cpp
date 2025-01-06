#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insert(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Insert at last
void insertLast(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void printList(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    Node* node1 = new Node(9);

    Node* head = node1;
    Node* tail = node1;

    cout << "Initial list: ";
    printList(head);

    cout << endl << "By insert function:" << endl;
    insert(head, 11);
    insert(head, 12);
    insert(head, 13);
    printList(head);

    // Update tail to point to the new last node
    tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }

    cout << endl << "Inserting at last:" << endl;
    insertLast(tail, 10);
    insertLast(tail, 11);
    insertLast(tail, 12);
    insertLast(tail, 13);
    printList(head);

    return 0;
}
