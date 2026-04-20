#include<iostream>
using namespace std;
//Single linked list implementation
struct Node{
    int data;
    Node *next;
    Node(int n){
        data = n;
        next = nullptr;
    }
};
void insert(Node **head, int n){
    Node *newNode = new Node(n);
    if(*head == nullptr){
        *head = newNode;
        return;
    }
    Node *temp = *head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}
void remove(Node **head, int n){
    if(*head == nullptr){
        cout<<"List is empty"<<endl;
        return;
    }
    if((*head)->data == n){
        Node *temp = *head;
        *head = (*head)->next;
        delete temp;
        return;
    }
    Node *temp = *head;
    while(temp->next != nullptr && temp->next->data != n){
        temp = temp->next;
    }
    if(temp->next == nullptr){
        cout<<"Element not found"<<endl;
        return;
    }
    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
void display(Node *head){
    Node *temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(void){
    Node *head = nullptr;
    int n;
    cout<<"Enter the number of elements to insert: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cout<<"Enter the element to insert: ";
        cin>>data;
        insert(&head,data);
    }
    int m;
    cout<<"Enter the number of elements to remove: ";
    cin>>m;
    for(int i=0;i<m;i++){
        int data;
        cout<<"Enter the element to remove: ";
        cin>>data;
        remove(&head,data);
    }
    cout<<"Elements in the list: ";
    display(head);
    return 0;
}