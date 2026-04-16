#include<iostream>
using namespace std;

struct CircularQueue{
    int *arr;
    int front,rear,capacity;
    CircularQueue(int size){
        capacity = size;
        front = 0;
        rear = -1;
        arr = new int[capacity];
    }
    CircularQueue(){
        delete[] arr;
    }
};
bool isFull(CircularQueue *q){
    return (q->rear == q->capacity - 1);
}
bool isEmpty(CircularQueue *q){
    return (q->front > q->rear);
}
void enqueue(CircularQueue *q,int data){
    if(isFull(q)){
        cout<<"Queue is full"<<endl;
        return;
    }
    q->rear = (q->rear + 1) % q->capacity;
    q->arr[q->rear] = data;
}
void dequeue(CircularQueue *q){
    if(isEmpty(q)){
        cout<<"Queue is empty"<<endl;
        return;
    }
    q->front = (q->front + 1) % q->capacity;
}
int main(void){
    int size;
    cout<<"Enter the size of the queue: ";
    cin>>size;

    CircularQueue *q=new CircularQueue(size);
    
    int n;
    cout<<"Enter the number of elements to enqueue: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cout<<"Enter the element to enqueue: ";
        cin>>data;
        enqueue(q,data);
    }
    int m;
    cout<<"Enter the number of elements to dequeue: ";
    cin>>m;
    for(int i=0;i<m;i++){
        dequeue(q);
    }
    cout<<"Elements in the queue: ";
    for(int i=q->front;i!=q->rear;i=(i+1)%q->capacity){
        cout<<q->arr[i]<<" ";
    }
    cout<<endl;

    
    return 0;
}