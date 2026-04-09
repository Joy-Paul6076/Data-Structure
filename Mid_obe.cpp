#include<iostream>
#include<vector>
using namespace std;
struct Parts{
    string name;
    int quantity;
};

int main(void){
    int n,m;
    cout<<"Enter the number of parts: ";
    if(!(cin>>n)){
        cout<<"Invalid input for number of parts."<<endl;
        return 0;
    }

    if(n <= 0){
        cout<<"Invalid number of parts."<<endl;
        return 0;
    }

    Parts p[n];
    // Input parts
    for(int i=0; i<n; i++){
        cout<<"Enter the name of part "<<i+1<<": ";
        if(!(cin>>p[i].name)){
            cout<<"Invalid input for part name."<<endl;
            return 0;
        }
        cout<<"Enter the quantity of part "<<i+1<<": ";
        if(!(cin>>p[i].quantity)){
            cout<<"Invalid input for quantity."<<endl;
            return 0;
        }
    }
    //sorting the parts
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(p[j].quantity > p[j+1].quantity){
                swap(p[j], p[j+1]);
            }
        }
    }
    //Searching among the parts using binary search
    cout<<"Enter the quantity to search for: ";
    cin>>m;

    int low = 0, high = n - 1, mid;
    while(low <= high){
        mid = low + (high - low)/2;
        if(p[mid].quantity == m){
            cout<<"The part with quantity "<<m<<" is: "<<p[mid].name<<endl;
            break;
        }
        else if(p[mid].quantity < m){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    if(low > high){
        cout<<"The part with quantity "<<m<<" is not found."<<endl;
    }
    
    return 0;


    
}