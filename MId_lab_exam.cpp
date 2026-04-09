#include<iostream>
using namespace std;

struct Machine{
    int id;
    string brand_name;
    int life_expectancy;
};
int main(void){
    int n;
    cout<<"Enter the number of machines: ";
    cin>>n;
Machine m[n];
for(int i=0; i<n; i++){
    cout<<"Enter the id, brand name and life expectancy of machine "<<i+1<<": ";
    cin>>m[i].id>>m[i].brand_name>>m[i].life_expectancy;

}
//Searching for the part with lowest life expectancy
int min_index = 0;
for(int i=1; i<n; i++){
    if(m[i].life_expectancy < m[min_index].life_expectancy){
        min_index = i;
    }
}

    cout<<"The machine with the lowest life expectancy is: "<<m[min_index].id<<endl;


    return 0;

}

