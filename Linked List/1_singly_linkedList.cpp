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

    //Destructor to free up memory after deletion
    ~Node(){
        int val = this->data;
        //free up memory
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data "<<val<<endl;
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


//Insertion at a given position
void InsertInBetween(Node* &tail, Node* &head, int pos, int d){
    //started from head so can't insert to first pos 
    if(pos == 1){
        InsertAtHead(head, d);
        return;
    }
    Node* temp = head;

    int cnt = 1;

    while(cnt<pos-1){
        temp = temp->next;
        cnt++;
    }

    //insertion at tail, then tail should be updated
    if(temp->next == NULL){
        InsertAtTail(tail, d);
        return;
    }

    //Creating node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;

}


//Deletion of node in linked list
void deleteNode(int pos, Node* &head){

    //deleting the first node
    if(pos == 1){
        Node* temp = head;
        head = head->next;

        //freeup memory
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

        prev->next = curr->next;

        curr->next = NULL;
        delete curr;
    }
    
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
    cout<<endl;

    //insertio at any position
    InsertAtTail(tail, 18);
    print(head);
    cout<<endl;

    cout<<"Insert in between 16 and 17 "<<endl;
    InsertInBetween(tail, head, 5, 22);
    print(head);
    cout<<endl;

    cout<<"Insertion at the start "<<endl;
    InsertInBetween(tail, head, 1, 2);
    print(head);
    cout<<endl;


    //Verify head and tail
    cout<<"Head is "<<head->data<<endl;
    cout<<"Tail is "<<tail->data<<endl;
    cout<<endl;

    cout<<"Insertion at the end "<<endl;
    InsertInBetween(tail, head, 9, 24);
    print(head);
    cout<<endl;

    cout<<"Head is "<<head->data<<endl;
    cout<<"Tail is "<<tail->data<<endl;
    cout<<endl;


    //Deleting the nodes in linked list
    deleteNode(1, head);
    print(head);
    cout<<endl;

    deleteNode(4, head);
    print(head);
    cout<<endl;

    return 0;
}
