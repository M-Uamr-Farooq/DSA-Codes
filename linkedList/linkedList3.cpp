#include<iostream>
using namespace std;

class Node {
        public:
        int data;
        Node *next;


        Node(int data){
            this->data = data;
            this->next = NULL;
            
        }

   };

    void insert(Node* &node , int data){
        
         Node* temp = new Node(data);
         temp->next = node;
         node = temp;
         


     }
     

int main(){
   Node* newNode = new Node(5);
   

   cout<<newNode->data<<endl;
   cout<<newNode->next<<endl;

   

   

return 0;
}