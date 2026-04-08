#include<iostream>
using namespace std;
//Write a program to take a string input from the user and print 
//it using both array indexing and without using array indexing.

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<"String object accessed using array and loop...\n";
    for(int i=0; i<s.length(); i++){
        cout<<s[i];
    }
    cout<<endl;
    cout<<"Not using arrays or loops\n";
    cout<<s;

    return 0;
}
