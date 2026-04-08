#include<iostream>
#include<string>
using namespace std;
//Write a program to create a structure named Food_item with three members: food_item_name, Quantity, and price.
//Then, create an array of structures to store information about multiple food items.
//Finally, calculate and display the total price of all the food items based on their quantity and price.

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