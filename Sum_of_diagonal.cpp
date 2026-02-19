#include<iostream>
using namespace std;

int main(){
int a;
cout<<"Enter the number of rows and columns for the square matrix: "<<endl;
cin>>a;
int arr[a][a];
cout<<"Enter "<<a*a<<" numbers for the array: "<<endl;
for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        cin>>arr[i][j];
    }
}
int b=a,sum;
for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        if(i==j){
            sum+=arr[i][j];
        }
        else if(j==b){
            sum+=arr[i][j];
            b--;
        }
    }
}
cout<<"The sum of the diagonal elements is: "<<sum<<endl;
return 0;
}