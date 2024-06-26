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

    //empty list
    if(tail == NULL){
        cout<<"List is empty "<<endl;
        return ;
    }

    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }
    while(tail != temp);

    cout<<endl;

}

void print1(Node* tail){
    Node* curr = tail->next;
    cout<<tail->data<<" ";

    while(curr != tail) {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}


void deleteNode(Node* &tail, int val){

    //Empty list
    if(tail == NULL){
        cout<<"List is empty, please check again "<<endl;
        return ;
    }
    else{
        //non-empty

        //assuming that val is present in the linked list
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != val){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        //1 node linked list
        if(curr == prev){
            tail = NULL;
        }   

        //>=2 node linked list
        else if(tail == curr){
            tail = prev;
        }

        curr->next = NULL;

        delete curr;
    }

}

//Check circular or not

bool isCircularList(Node* head){
    //Empty lsit

    if(head == NULL){
        return true;
    }

    //1 and >1 logic same

    Node* temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }


    if(temp == head){
        return true;
    }

    return false;
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


    //Deletion

    // deleteNode(tail, 10);
    // print(tail);
    // cout<<endl;






    //Circular list or not
    if(isCircularList(tail)){
        cout<<"Linkedlist is circular in nature "<<endl;
    }
    else{
        cout<<"Not circulat in nature "<<endl;
    }

    return 0;
}
