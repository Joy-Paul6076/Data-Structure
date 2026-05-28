#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* prev;
    node* next;
    
    node(int n) {
        data = n;
        prev = nullptr;
        next = nullptr;
    }
    ~node() {
        // Destructor to clean up the node
        prev = nullptr;
        next = nullptr;
    }
};

class queue {
public:
    node* front;
    node* rear;
    
    queue() {
        front = nullptr;
        rear = nullptr;
    }
    
    ~queue() {
        // Destructor to clean up all nodes
        while (front != nullptr) {
            node* temp = front;
            front = front->next;
            delete temp;
        }
    }
    
    void enqueue(int n) {
        node* newnode = new node(n);
        if (front == nullptr) {
            front = newnode;
            rear = newnode;
            return;
        }
        rear->next = newnode;
        newnode->prev = rear;
        rear = newnode;
    }
    
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty" << endl;
            return;
        }
        
        node* temp = front;
        front = front->next; 
        
        if (front != nullptr) {
            front->prev = nullptr; 
        } else {
            rear = nullptr; 
        }
        
        cout << "Dequeued: " << temp->data << endl;
        delete temp;
    }
    
    // Display the current elements in the queue
    void display() {
        if (front == nullptr) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Current Queue: ";
        for (node* temp = front; temp != nullptr; temp = temp->next) {
            cout << temp->data << " ";
        }
        cout << endl;
    }
};

int main() {
    queue q;
    int n, data, m;
    
    cout << "Enter the number of elements to enqueue: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter the element to enqueue "<<i+1<<" : ";
        cin >> data;
        q.enqueue(data);
    }
    
    q.display();
    
    cout << "Enter the number of elements to dequeue from the front: ";
    cin >> m;
    for (int i = 0; i < m; i++) {
        q.dequeue();
    }
    
    q.display();
    
    return 0;
}