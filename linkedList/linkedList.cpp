#include<iostream>
using namespace std;
 
  class Node {
    public:
       int data;
       Node* next;
      Node(int data){
        this->data = data;
        this->next = NULL;
      }
  };

  void insert(Node* &node1 , int d){
    // create new node
    Node* temp = new Node(d);
    temp->next = node1;
    node1 = temp;
  }

   void insertTail(Node* &tail , int d){ 
        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp;

    }
    
    void print(Node* &head){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
     
    //  insert at last no
        


 int main(){
   
   Node* node1 = new Node(6);

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

Node* head = node1;

print(head);

// insert(head , 12);
// insert(head, 15);
// insert(node1 , 13);

print(head);
// print(node1);


cout<<"printing at tail"<<endl;

Node* tail = node1;

insertTail(tail, 12);
insertTail(tail, 13);
insertTail(tail, 14);

print(head);


 
  return 0;
}