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



        class List{
            Node* head;
            Node* tail;
            public:
            List(){
                head = tail = NULL;
            }


    //   implementing insert functions
      
        void insert(int val , int pos){
                if(pos < 0){
                    cout<<"invalid position"<<endl;
                    return;
                }
                if(pos == 0){
                    // push_front(val);
                }
                Node* temp = head;
                for(int i = 0 ; i<pos - 1 ; i++){
                    temp = temp->next;
                }
                Node* newNode = new Node(val);
                newNode->next = temp->next;
                temp->next = newNode;
        }


        };

int main(){
   
return 0;
}