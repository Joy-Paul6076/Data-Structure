//code to find the maximum and minimum value of an array

#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
int arr[n];

int *ptr=arr;
int minvalue=*ptr;
int maxvalue=*ptr;
for(int i=0;i<n;i++){
        cout<<"Enter element no"<<i+1<<":";
    cin>>arr[i];
    if(*(ptr+1)>maxvalue)
        maxvalue=*ptr;
    if(*(ptr+1)<minvalue)
        minvalue=*ptr;

 ptr++;
}
cout<<"Maxvalue of the element is:"<<maxvalue<<endl;
cout<<"minvalue of the element is:"<<minvalue<<endl;
return 0;
}
