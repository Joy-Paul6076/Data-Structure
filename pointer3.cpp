//Swaping 2 numbers using pointer
#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int wap;
    wap =*a;
    *a=*b;
    *b=wap;
}
int main(){
int x,y;
cout<<"Enter 2 numbers for swap:";
cin>>x>>y;
cout<<"Before Swaping x="<<x<<"  "<<"y="<<y<<endl;
swap(&x,&y);
cout<<"After swaping x="<<x<<"  "<<"y="<<y<<endl;
return 0;


}
