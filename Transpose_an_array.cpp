#include<iostream>
using namespace std;

int main(){
    int a[3][4],b[4][3];
    cout<<"Enter 12 numbers for array 'a':"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            b[i][j]=a[j][i];
        }
    }
    cout<<"Result:"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}