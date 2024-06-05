#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        //constructor
        Node(int d){
            this->data = d;
            this->next = NULL;
        }

        //destructor
        ~Node(){
            int val = this->data;

            if(this->next != NULL){
                delete next;
                next = NULL;
            }
            cout<<"Memeory free for node with data "<<val<<endl;
        }
};

//insertion in cll

void insertNode(Node* &tail, int ele, int d){
    //assuming that ele is present in the list

    //empty list

    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //non empty list
        //assuming that ele is present in the list

        Node* curr = tail;

        while(curr->data != ele){
            curr = curr->next;
        }

        //element found and pointing the curr
        Node* temp = new Node(d);

        temp->next = curr->next;
        curr->next = temp;

    }
}


void deleteNode(Node* &tail, int val){
    //empty list

    if(tail == NULL){
        cout<<"List is empty "<<endl;
        return ;
    }
    else{
        //non-empty

        //assuming that val is present in the list
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != val){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        //1 node linkedlist

        if(curr == prev){
            tail = NULL;
        }

        //>=2 node linkedlist
        else if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;

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




//To detect loop in linkedlist

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }

    map <Node*, bool> visited;

    Node* temp = head;

    while(temp != NULL){


        //cycle is present
        if(visited[temp] == true){
            return 1;
        }

        visited[temp] = true;
        temp = temp->next;

    }
    return false;

}

int main(){

    Node* tail = NULL;
    Node* head = NULL;

    //inserting in the empty list
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 5, 6);
    
    print(tail);

    // deleteNode(tail, 3);
    // print(tail);
     

    return 0;
}