#include<iostream>
using namespace std;

//creation of the node
class Node{

    public:
        int data;
        Node *next;


    //constructor for node
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


//Insertion of node at head

//take as a reference var coz it should make node not a copy
void InsertAtHead(Node* &head, int d){

    //create new node
    Node *temp = new Node(d);

    temp->next = head;

    head = temp;
}


//To insert node at Tail
void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);

    tail->next = temp;

    tail = temp;
    //tail = tail->next;
}

//Traverse a linked list
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    //new node creation
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    cout<<endl;

    //Head positioned to new node
    Node* head = node1;

    //Tail also point to same node
    Node* tail = node1;

    //Insertion of data in Linked
    print(head);
    cout<<endl;

    cout<<"Insertion at the head"<<endl;
    InsertAtHead(head, 12);
    print(head);
    cout<<endl;

    InsertAtHead(head, 15);
    print(head);

    cout<<endl;

    //insertion at the tail
    cout<<"Insertion at the tail"<<endl;
    InsertAtTail(tail, 16);
    InsertAtTail(tail, 17);
    print(head);
    return 0;
}
