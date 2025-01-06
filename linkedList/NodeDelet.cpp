
#include<iostream>
using namespace std;
 
   class Node {
        public:
        int data;
        Node* next;

 
    Node(int data){
        this->data = data;
        next = NULL;
    }

   };
    
    void printList(Node* &head){
            Node* temp = head;
            while(temp != NULL){
              cout<<temp->data;
              temp = temp->next;
              if(temp != NULL){
                cout<<" -> ";
              }
              
            }
    }


    void insert(Node* &head, int d){
          Node* temp = new Node(d);
          temp->next = head;
          head = temp;

    }

     void insertLast(Node* &tail , int d){
          Node* temp = new Node(d);
          tail->next = temp;
          tail = temp;
     }


        void delNodefromPos(Node* &head , int val){
            Node* temp = head;
            while(temp->next->data != val){
                temp = temp->next;
            }
            Node* toDelete = temp-> next;
            temp->next = temp->next->next;
            delete toDelete;
        }       
    
 int main(){
 
    Node* node1 = new Node(1);
    Node* head = node1; 
    Node* tail = node1; 


    // insert(head , 2);
    insertLast(tail, 2);
    insertLast(tail, 3);
    insertLast(tail, 4);
    insertLast(tail, 5);
    
    
    

    printList(head);
    cout<<endl;
   delNodefromPos(head, 3);
     printList(head);

  return 0;
}