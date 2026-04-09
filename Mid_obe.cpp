#include<iostream>
using namespace std;
struct Parts{
    string name;
    int quantity;
};

int main(void){
    Parts p[5]={"P1", 54, "P2", 11, "P3", 43, "P4", 29, "P5", 21};
    //sorting the parts
    for(int i=0; i<5-1; i++){
        for(int j=0; j<5-i-1; j++){
            if(p[j].quantity > p[j+1].quantity){
                swap(p[j], p[j+1]);
            }
        }
    }
    //Searching 29 among the parts using binary search
    int low = 0, high = 4, mid;
    while(low <= high){
        mid = low + (high - low)/2;
        if(p[mid].quantity == 29){
            cout<<"The part with quantity 29 is: "<<p[mid].name<<endl;
            break;
        }
        else if(p[mid].quantity < 29){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    if(low > high){
        cout<<"The part with quantity 29 is not found."<<endl;
    }
    
    return 0;


    
}