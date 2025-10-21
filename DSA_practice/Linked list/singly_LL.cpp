#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};
void insertAtHead(Node* &head, int d){
    Node* temp= new Node(d);// you may mistake here
    temp->next=head;// you may mistake here
    head=temp;// you may mistake here
}
void print(Node* &head)//you may mistake here. you only need one parameter here.
{
    Node* temp= head;
    while(temp!= NULL){//you may mistake here
        cout<< temp-> data <<" ";// you may mistake here. this line should be here or else code will crash.
        temp=temp->next;
    }
}
int main(){   
    Node* node1= new Node(20);
    Node* head=node1;
    insertAtHead(head,12);
    insertAtHead(head,16);
    insertAtHead(head,4);

    print(head);
}
