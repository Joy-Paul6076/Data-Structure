#include<iostream>
using namespace std;
// sorting in descending order
void bubble_sort(int arr[], int n){
    for(int i=0; i<n-1;i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
// sorting in descending order
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
        }
    }
}
void insertion_sort(int arr[], int n){
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]<key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}


int main( void){
    int n;
cout<<"enter the number of elements in the array: ";
cin>>n;
int arr[n];
cout<<"enter the elements of the array: ";
for(int i=0; i<n; i++){
    cin>>arr[i];
}
bubble_sort(arr, n);
cout<<"Sorted array: "<<endl;
for(int i=0; i<n; i++){
    cout << arr[i] << " ";
}
cout << endl;
return 0;
}