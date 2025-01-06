#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }
   
//    implementing STL functions of linkedlist.
    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout<<"list is empty"<<endl;
            return;
        }
        else{
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_back(){
        if(head == NULL){
            cout<<"LL is empty "<<endl;
            return;
        }
       Node* temp = head;
       while (temp->next != tail)
       {
        temp = temp->next;
       }
       temp->next = NULL;
       delete tail;
       tail =  temp;
    }


  void insert(int val , int pos){
                if(pos < 0){
                    cout<<"invalid position"<<endl;
                    return;
                }
                if(pos == 0){
                    push_front(val);
                    return;
                }
                Node* temp = head;
                for(int i = 0 ; i<pos - 1 ; i++){
                    if(temp == NULL){
                        cout<<"invalid position"<<endl;
                        return;
                    }
                    temp = temp->next;
                }
                Node* newNode = new Node(val);
                newNode->next = temp->next;
                temp->next = newNode;
        }

    int search(int key){
        Node* temp = head;
        int idx = 0;
        while(temp != NULL){
            if(temp->data == key){
                return key;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    void print_ll()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);

    //  printinting linkedlist
     cout<<endl<<"After push front"<<endl;
    ll.print_ll();

    cout << endl
         << "after push back" << endl;

    List ll2; // it also be list ll.
    ll2.push_back(1);
    ll2.push_back(2);
    ll2.push_back(3);
    ll2.push_back(4);

    ll2.print_ll();

    cout<<endl<<"After pop front"<<endl;

    ll2.pop_front();

    ll2.print_ll();

    cout<<endl<<"After pop back"<<endl;

    ll2.pop_back();

    ll2.print_ll();

        cout<<endl<<"After insert"<<endl;
    ll2.insert(1 , 2);

    ll2.print_ll();

    cout<<endl<<ll2.search(3)<< " is the index of given value!"<<endl;
    return 0;
}