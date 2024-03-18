#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }


    //Destructor
    ~Node(){
        int val = this->data;

        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for node with data "<<val<<endl;
    }
};

//print the linked list
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//To get length of the linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    
    return len;
}

//To insert at head
void insertAtHead(Node* &head, int d){

    //create
    Node* temp = new Node(d);

    temp->next = head;
    head->prev = temp;
    head = temp;
}

//Insertion at the tail
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

//Insertion at the position
void insertAtPos(Node* &tail, Node* &head, int pos, int d){

    //insert at start
    if(pos == 1){
        insertAtHead(head, d);
        return ;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt<pos-1){
        temp = temp->next;
        cnt++;
    }

    //insert at tail
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return ;
    }

    //insert in between
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;

    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;

}


//Deletion in doubly linked list
void deleteNode(int pos, Node* &head, Node* &tail){

    //deleting the first node
    if(pos == 1){
        Node* temp = head;

        temp->next->prev = NULL;

        head = temp->next;

        temp->next = NULL;

        delete temp;
    }
    else{

        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;

        while(cnt<pos){
            prev = curr;

            curr = curr->next;
            cnt++;
        }

    
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next  = NULL;
     
        delete curr;
    }
    
}


int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);

    cout<<"Length of linked list is "<<getLength(head)<<endl;
    cout<<endl;

    //Insertion at head
    insertAtHead(head,4);
    print(head);
    cout<<endl;

    //Insertion at tail
    insertAtTail(tail,6);
    print(head);
    cout<<endl;

    insertAtTail(tail,9);
    print(head);
    cout<<endl;


    //Insertion in between

    insertAtPos(tail, head, 2, 100);
    print(head);
    cout<<"head is "<<head->data<<endl;
    cout<<"Tail is "<<tail->data<<endl;
    cout<<endl;


    //Deletion in linked list
    deleteNode(5, head, tail);
    print(head);
    cout<<"head is "<<head->data<<endl;
    cout<<"Tail is "<<tail->data<<endl;
    cout<<endl;

    
    return 0;
}
