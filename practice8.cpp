#include<iostream>
using namespace std;
//Writing a code that takes TWO parameters to print all the odd numbers 
//between a given range. Input the starting value of the range and ending value of the range. 
//Then, send them as the parameters to your function.

int main(void){
    int start, end;
    cout<<"Enter the starting value of the range: ";
    cin>>start;
    cout<<"Enter the ending value of the range: ";
    cin>>end;

    cout<<"The odd numbers between "<<start<<" and "<<end<<" are: ";
    if(start>end){
        cout<<"Invalid range. Starting value should be less than or equal to ending value.";
        return 0;
    }
    for(int i=start; i<=end; i++){
        if(i%2 != 0){
            cout<<i<<" ";
        }
    }
    return 0;


    



}