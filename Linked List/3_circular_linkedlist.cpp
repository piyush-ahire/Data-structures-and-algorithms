#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    //Destructor
    ~Node(){
        int val = this->data;

        if(this != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memeory is free for the node with data "<<val<<endl;
    }

};


//Insertion of node
void insertNode(Node* &tail, int element, int d){

    //empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //non-empty list, assuming that element is present in the list

        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        //Element is found and curr is reperesenting element node

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;

    }
}


void print(Node* tail){
    Node* temp = tail;

    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }
    while(tail != temp);

    cout<<endl;

}

void print1(Node* tail){
    Node *curr = tail->next;
    cout<<tail->data<<" ";

    while(curr != tail) {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

int main(){

    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);
    cout<<endl;

    insertNode(tail, 3, 5);
    print(tail);
    cout<<endl;   
    

    insertNode(tail, 5, 7);
    print(tail);
    cout<<endl;

    insertNode(tail, 7, 9);
    print(tail);
    cout<<endl;

    //in between
    insertNode(tail, 5, 6);
    print(tail);
    cout<<endl;

    //at last node
    insertNode(tail, 9, 10);
    print(tail);
    cout<<endl;

    return 0;
}
