#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    //destructor
    ~Node(){
        int val = this->data;

        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memeory free for node with data "<<val<<endl;
    }
};



//printing the linkedlist
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int getlen(Node* head){
    int len = 0;

    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }

    return len;
}

//insertion in doubly linkedlist
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);

    temp->next = head;
    head->prev = temp;
    head = temp;
}


void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPos(Node* &tail, Node* &head, int pos, int d){
    //If element is at first pos
    if(pos == 1){
        insertAtHead(head, d);
        return ; 
    }


    //Element is in between
    Node* temp = head;
    int cnt = 1;

    while(cnt<pos-1){
        temp = temp->next;
        cnt++;  
    }

    //Inserting at the last position
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return ;
    }

    //creating a nodde for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;

    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}


//Deletion of node

void deleteNode(int pos, Node* &head){
    //deleting first or start node

    if(pos == 1){
        Node* temp = head;

        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;

        delete temp;
    }
    else{
        //deleting any middle or last node

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
        curr->next = NULL;
        delete curr;

    }
}


int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout<<endl;

    cout<<getlen(head)<<endl;

    insertAtHead(head, 12);
    print(head);
    cout<<endl;

    insertAtTail(tail, 14);
    print(head);
    cout<<endl;

    insertAtPos(tail, head, 2, 18);
    print(head);
    cout<<endl;

    deleteNode(2, head);
    print(head);
    cout<<endl;

    return 0; 
}