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
void insertAtHead(Node* &tail, Node* &head, int d){

    if(head == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);

        temp->next = head;
        head->prev = temp;
        head = temp;
    }

}

//Insertion at the tail
void insertAtTail(Node* &tail, Node* &head, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
        }
    }


//Insertion at the position
void insertAtPos(Node* &tail, Node* &head, int pos, int d){

    //insert at start
    if(pos == 1){
        insertAtHead(head, tail, d);
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
        insertAtTail(tail, head, d);
        return ;
    }

    //insert in between
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;

    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;

}

int main(){

     
    Node* head = NULL;
    Node* tail = NULL;

    print(head);

    cout<<"Length of linked list is "<<getLength(head)<<endl;
    cout<<endl;

    //Insertion at head
    insertAtHead(head, tail, 4);
    print(head);
    cout<<endl;

    //Insertion at tail
    insertAtTail(tail, head, 6);
    print(head);
    cout<<endl;


    //Insertion in between

    insertAtPos(tail, head, 2, 100);
    print(head);
    cout<<endl;

    cout<<"head is "<<head->data<<endl;
    cout<<"Tail is "<<tail->data<<endl;
    cout<<endl;

    insertAtPos(tail, head, 4, 200);
    print(head);
    cout<<endl;

    cout<<"head is "<<head->data<<endl;
    cout<<"Tail is "<<tail->data<<endl;


    return 0;
}
