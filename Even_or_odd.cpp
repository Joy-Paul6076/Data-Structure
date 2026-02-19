#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements for the array:"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter input for index "<<i+1<<":"<<endl;
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            cout<<a[i]<<" is even";
        }
        else{
            cout<<a[i]<<" is odd";
        }
        if(a[i]<0){
            cout<<"and negative";
        }
     cout<<endl;   
    }
return 0;
}
