#include<iostream>
using namespace std;
//This program checks if a number is prime and calculates its factorial if it is prime.
bool is_prime(int n){
    if(n<=1){
        return false;
    }
    if (n<=3){
        return true;
    }
    if (n%2==0 || n%3==0){
        return false;
    }
    for(int i=5; i*i<=n; i+=6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}
int main(void){
   int n,x=1;
   cout<<"Enter a number: ";
   cin>>n;
    if(is_prime(n)){
        for(int i=1; i<=n; ++i){
        x = x*i;
        }
        cout<<"The Factorilal of "<<n<<" is: "<<x<<endl;
    }
    else{
        cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
}