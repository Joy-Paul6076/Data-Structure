#include<iostream>
using namespace std;

//Stack implementation
struct Stack{
    int *arr;
    int top,capacity;
    Stack(int size){
        capacity = size;
        top = -1;
        arr = new int[capacity];
    }
    ~Stack(){
        delete[] arr;
    }
};
bool isFull(Stack *s){
    return (s->top == s->capacity - 1);
}
bool isEmpty(Stack *s){
    return (s->top == -1);
}
void push(Stack *s, int n){
    if(isFull(s)){
        cout<<"Stack is full"<<endl;
        return;
    }
    s->arr[++s->top] = n;
}
void pop(Stack *s){
    if(isEmpty(s)){
        cout<<"Stack is empty"<<endl;
        return;
    }
    s->top--;
}
int main(void){
    int size;
    cout<<"Enter the size of the stack: ";
    cin>>size;

    Stack *s=new Stack(size);
    
    int n;
    cout<<"Enter the number of elements to push: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cout<<"Enter the element to push: ";
        cin>>data;
        push(s,data);
    }
    int m;
    cout<<"Enter the number of elements to pop: ";
    cin>>m;
    for(int i=0;i<m;i++){
        pop(s);
    }
    cout<<"Elements in the stack: ";
    for(int i=s->top;i>=0;i--){
        cout<<s->arr[i]<<" ";
    }
    cout<<endl;
    delete s;
}