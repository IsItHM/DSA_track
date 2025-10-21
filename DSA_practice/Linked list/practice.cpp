#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, int position, int data){
    if(position == 1){
        insertAtHead(head, data);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    
    while(cnt < position-1 && temp != NULL){
        temp = temp->next;
        cnt++;
    }
    if(temp == NULL) return; // invalid position
    
    Node* NodetoInsert = new Node(data);
    NodetoInsert->next = temp->next;
    temp->next = NodetoInsert;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// ✅ Function 1: Delete a node at given position
void deleteNode(Node* &head, int position){
    if(head == NULL) return;

    // Deleting first node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* curr = head;
    Node* prev = NULL;
    int cnt = 1;

    while(cnt < position && curr != NULL){
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    if(curr == NULL) return; // position out of bounds

    prev->next = curr->next;
    delete curr;
}

// ✅ Function 2: Reverse the linked list
void reverseList(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* nextNode = NULL;

    while(curr != NULL){
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    head = prev;
}

int main(){
    Node* Node1 = new Node(20);
    Node* head = Node1;
    Node* tail = Node1;

    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    insertAtTail(tail,70);

    cout << "Original List: ";
    print(head);

    insertAtPosition(head,2,90);
    insertAtPosition(head,1,99);
    cout << "After Insertions: ";
    print(head);

    deleteNode(head,3);
    cout << "After Deleting 3rd Node: ";
    print(head);

    reverseList(head);
    cout << "After Reversing: ";
    print(head);

    return 0;
}

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void insertAtHead(Node* &head, int data){
//     Node* temp= new Node(data);
//     temp->next=head;
//     head=temp;
// }
// void insertAtPosition(Node* & Head, int position, int data)
// {
//     if(position==1)
//     {
//         insertAtHead(Head,data);
//         return;
//     }
//     Node* temp=Head;
//     int cnt=1;
    
//     while(cnt<position-1)
//     {
//         temp=temp->next;
//         cnt++;
//     }
//     Node* NodetoInsert= new Node(data);
//     NodetoInsert->next=temp->next;
//     temp->next=NodetoInsert;

// }

// void print(Node* &Head){
//     Node* temp= Head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// void insertAtTail(Node* &tail,int data)
// {
//     Node* temp=new Node(data);
//     tail->next =temp;
//     tail=temp;
// }

// int main(){
//     Node* Node1= new Node(20);
//     Node* Head= Node1;
//     Node* tail= Node1;
//     // insertAtHead(Head,30);
//     // insertAtHead(Head,30);
//     // insertAtHead(Head,30);
//     // insertAtHead(Head,30);


//     insertAtTail(tail,40);
//     insertAtTail(tail,40);
//     insertAtTail(tail,40);
//     insertAtTail(tail,40);
//     insertAtTail(tail,40);

//     insertAtPosition(Head,2,90);
//     insertAtPosition(Head,1,99);

//     print(Head);

// }