//printing a number using pointer
#include<iostream>
using namespace std;
int main(){
int x=5;
int *ptr;
ptr=&x;
int **ptr1=&ptr;
int ***ptr2=&ptr1;

cout<<x<<endl;
cout<<*ptr<<endl;
cout<<&x<<endl;
cout<<ptr<<endl;
cout<<ptr1<<endl;
cout<<**ptr1<<endl;
cout<<&ptr<<endl;
cout<<*ptr1<<endl;
cout<<**ptr2<<endl;
return 0;



}
