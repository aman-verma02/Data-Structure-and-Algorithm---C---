// SINGLY LINKED LIST


#include <iostream>
using namespace std;

class Node {

    public:
    int data; 
    Node* next;

    // constructor
    Node ( int data ){
        this -> data = data; 
        this -> next = NULL;
    }

    // destructor 
    ~ Node ( ) { 
        int value = this -> data; 
        // memory free 
        if (this -> next != NULL )
        {
            delete next; 
            this -> next = NULL ; 
        }  
        cout << " memory is free for node with data " << value << endl;   
    }
};

// insertion of data at head 
void insertAthead ( Node* &head , int d ){

    // creation of new node 
    Node* temp = new Node(d); 
    temp -> next = head ; 
    head = temp ; 


}
// insertion of data at tail 
void insertAtTail ( Node* &tail , int d ){

    // creation of new node 
    Node* temp = new Node(d); 
    tail -> next = temp  ;
    tail = temp ; 


}

//traversing the linked list 
void print (Node* &head){

    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp -> data << " "; 
        temp = temp -> next; 

    }
    cout << endl;
}

void insertAtposition(Node* &tail , Node* &head ,  int position , int d ){
    
    // insertion at start 
    if (position== 1)
    {
        insertAthead(head , d);
        return ; 
    }
    
    Node* temp = head; 
    int cnt = 1 ; 

    while ( cnt < position - 1){
        temp = temp -> next  ; 
        cnt++ ; 

    }

    // inserting at last position 
    if (temp -> next == NULL)
    {
        insertAtTail(tail  , d);
        return ; 
    }
    

    // creating a new node for new data 
    Node * nodeToInsert = new Node (d );
    nodeToInsert -> next = temp -> next ; 
    temp -> next = nodeToInsert; 

}

void deleteNode ( int position , Node* &head){ 
    //deleting first or start node 
    if (position == 1)
    {
        Node* temp = head ; 
        head = head -> next ; 
        // memory free start node 
        temp -> next = NULL; 
        delete temp ; 
    }
    else{ 
        // deleting any middle node or last node 
        Node* curr  = head ; 
        Node* prev = NULL ; 
        int cnt = 1; 
        while (cnt < position)
        {
            prev = curr;
            curr = curr -> next ; 
            cnt++ ; 

        }
        prev -> next = curr -> next ; 
        curr -> next = NULL ; 
        delete curr;
        
    }
}


int main() {

    // created a new node 
    Node* node1 = new Node(10);
    cout << node1 -> data << endl; 
    
    // head pointed to node ;
    Node* head = node1;
    Node* tail = node1; 
    
/*
    // insertion of data to new node 
    insertAthead(head , 13);
    // printing of linked list after pointing head to new node 
    print(head);

    // inserting at head 
    insertAthead ( head , 24); 
    print ( head );

*/

    // insertion of data to new node  at tail 
    insertAtTail(tail , 13);
    print(head);

    insertAtTail ( tail , 24); 
    print ( head );





    // inserting at position 
    insertAtposition( tail , head ,4  , 99);
    print (head);


    cout << "head " << head -> data << endl; 
    cout << "tail " << tail -> data << endl; 


    deleteNode ( 4 , head ); 
    print(head); 


    return 0;

}
