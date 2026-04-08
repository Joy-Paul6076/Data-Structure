#include<iostream>
using namespace std;
//3 Matrix addition
int main(void){
    int arr1[3][3], arr2[3][3],arr3[3][3], sum[3][3];
    cout<<"Enter elements of first matrix: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter elements of second matrix: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"Enter elements of third matrix: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr3[i][j];
        }
    }




    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j] + arr3[i][j];
        }
    }
    cout<<"Sum of the matrices: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
