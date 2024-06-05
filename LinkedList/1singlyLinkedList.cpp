#include<iostream>
#include<map>
using namespace std;

//creation of linkedlist
class Node{

    public:
        int data;
        Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;

        //memeory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memeory is free for node with data "<<value<<endl;
    }

};


//insertion of a node

void insertAthead(Node* &head, int d){
    //new node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    // new node create
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
    //tail = temp;
}


void insertAtPos(Node* &tail, Node* &head, int pos, int d){
    //If element is at first pos
    if(pos == 1){
        insertAthead(head, d);
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

    temp->next = nodeToInsert;
}


//Deletion of node

void deleteNode(int pos, Node* &head){
    //deleting first or start node

    if(pos == 1){
        Node* temp = head;

        head = head->next;
        //memory free start node
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

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

    }
}



//printing a linkedlist
void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
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
            cout<<"Present on element "<<temp->data<<endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;

    }
    return false;

}


//floyde cycle - slow and fast pointer

Node* floydDetectLoop(Node* head){
    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){

        fast = fast->next;

        if(fast != NULL){
            fast = fast->next;
        }

        slow = slow->next;

        if(slow == fast){
            cout<<"Present at "<<slow->data<<endl;
            return slow;
        }
            
        
    }

    return NULL;
}


Node* getStartingNode(Node* head){
    if(head == NULL)
        return NULL;

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

void removeLoop(Node* head){
    if(head == NULL)
        return ;

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp->next != startOfLoop){
        temp = temp->next;
    }

    temp->next = NULL;


}

 

 

int main(){

    //creation of a new node
    Node* node1 = new Node(10);
    cout<< node1->data<<endl;
    cout<< node1->next<<endl;
    cout<<endl;

    //pointing head tto the new node
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout<<endl;

    insertAthead(head, 12);
    print(head);
    cout<<endl;

    insertAtTail(tail, 14);
    print(head);
    cout<<endl;

    insertAtPos(tail, head, 3, 12);
    print(head);
    cout<<endl;

    insertAtPos(tail, head, 1, 9);
    print(head);
    cout<<endl;

    insertAtPos(tail, head, 6, 24);
    print(head);
    tail->next = head->next;
    cout<<endl;
     

    if(floydDetectLoop(head) != NULL){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"cycle is not present"<<endl;
    }


    Node* loop = getStartingNode(head);
    cout<<"Loop starts at "<<loop->data<<endl;



    removeLoop(head);
    print(head);
    
    
    // cout<<"head "<<head->data<<endl;
    // cout<<"tail "<<tail->data<<endl;

    // deleteNode(1, head);
    // print(head);
    // cout<<endl;

    // deleteNode(5, head);
    // print(head);
    // cout<<endl;



    return 0;
}