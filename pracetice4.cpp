#include<iostream>
using namespace std;
// bUBBLE sorting in descending order
void bubble_sort(int arr[], int n){
    for(int i=0; i<n-1;i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
// selection sorting in descending order
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
// insertion sorting in descending order
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

cout<<"Enter the sorting algorithm you want to use: "<<endl;
cout<<"1. Bubble Sort"<<endl;
cout<<"2. Selection Sort"<<endl;
cout<<"3. Insertion Sort"<<endl;
int choice;
cin>>choice;
switch(choice){
    case 1:
        bubble_sort(arr, n);
        break;
    case 2:
        selection_sort(arr, n);
        break;
    case 3:
        insertion_sort(arr, n);
        break;
    default:
        cout<<"Invalid choice!"<<endl;
}
return 0;
}