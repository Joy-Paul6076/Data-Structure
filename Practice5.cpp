#include<iostream>
using namespace std;
    int count1 = 0, count2 = 0;

void bubble_sort(int arr[], int n){

    for(int i=0; i<n-1;i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                count1++;
            }
             count2++;
        }

        
  
    }
}


int main(void){
  int n;
  cout<<"Enter the number of courses: ";
  cin>>n;
    int arr[n];
    cout<<"Enter Values: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
bubble_sort(arr, n);
cout<<"Sorted array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"passes: "<<count2<<endl;
    cout<<"Swaps: "<<count1<<endl;
    
    if(n%2==0){
        double median = (arr[n/2-1]+arr[n/2])/2.0;
        cout<<"Median: "<<median<<endl;
    } else {
        cout<<"Median: "<<arr[n/2]<<endl;
    }

    return 0;
}