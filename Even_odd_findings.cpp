#include <iostream>
using namespace std;
int main() {
    int a[15]={12,32,43,1,54,53,15,64,3,1};
    int b = 0, c = 0;
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    for(int i=9;i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"No of index for even number:";
    for(int i=0;i<10;i++){
        if(a[i]%2==0){
           b++ ;
           cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<" even numbers:";
    for(int i=0;i<10;i++){
        if(a[i]%2==0){
           cout<<a[i]<<" ";
        }
    }
    cout<<endl;
 cout<<"No of index for odd number:";
    for(int i=0;i<10;i++){
        if(a[i]%2!=0){
           c++ ;
           cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<"Odd numbers:";
    for(int i=0;i<10;i++){
        if(a[i]%2!=0){
           cout<<a[i]<<" ";
        }
    }
    int d;
    bool e = false;
    cout<<"Enter a number to search:";
    cin>>d;
    for(int i=0;i<10;i++){
            if(a[i]==d){
                cout<<"Number found "<<endl;
                e=true;
            }
    }
        if(e == false){
            cout<<"Number does not found"<<endl;
        }
    cout<<endl;
    cout<<"Even numbers are: "<<b<<endl;
    cout<<"Odd numbers are: "<<c<<endl;
    return 0;
}