#include<iostream>
using namespace std;
struct Queue{
    int *arr;
    int front,rear,capacity;
    Queue(int size){
        capacity = size;
        front = 0;
        rear = -1;
        arr = new int[capacity];
    }
    Queue(){
        delete[] arr;
    }
};
bool isFull(Queue *q){
    return (q->rear == q->capacity - 1);
}
bool isEmpty(Queue *q){
    return (q->front > q->rear);
}
void enqueue(Queue *q, int n){
    if(isFull(q)){
        cout<<"Queue is full"<<endl;
        return;
    }
    q->arr[++q->rear] = n;
}
void dequeue(Queue *q){
    if(isEmpty(q)){
        cout<<"Queue is empty"<<endl;
        return;
    }
    q->front++;
}
int main(void){
    int size;
    cout<<"Enter the size of the queue: ";
    cin>>size;

    Queue *q=new Queue(size);
    
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
    for(int i=q->front;i<=q->rear;i++){
        cout<<q->arr[i]<<" ";
    }
    cout<<endl;
    delete q;
    
    return 0;
}
