#include<iostream>
#include<string>
using namespace std;

struct Food_item
{
    string food_item_name;
    int Quantity;
    float price;

};
int main(void){
    int n, Total_price=0;
    cout<<"Enter the number of food items: ";
    cin>>n;
    Food_item a1[n];
    for(int i=0;i<n;i++){
        cout<<"Enter details for food item "<<i+1<<": ";
        cout<<"Enter name: ";
        cin>>a1[i].food_item_name;
        cout<<"Enter amount: ";
        cin>>a1[i].Quantity;
        cout<<"Enter price: ";
        cin>>a1[i].price;
    }
    for(int i=0;i<n;i++){
        int price = a1[i].price * a1[i].Quantity;
        Total_price += price;
    }
    cout<<"Total Price: "<<Total_price<<endl;

    return 0;

}