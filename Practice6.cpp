#include<iostream>
using namespace std;
int count1=0,count2=0;

void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int max_index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]>arr[max_index]){
                max_index = j;
            }
        }
        if(max_index != i){
            swap(arr[i],arr[max_index]);
            count1++;
        }
        count2++;
    }
}
int main(void){
    int n;
    cout<<"Enter the number of days: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Orders: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
selection_sort(arr, n);
cout<<"Sorted array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"passes: "<<count2<<endl;
    cout<<"Swaps: "<<count1<<endl;
    
    //Calculation of mean value
    double sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    double mean = sum/n;
    cout<<"Mean: "<<mean<<endl;

    return 0;
}