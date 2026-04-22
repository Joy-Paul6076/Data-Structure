//reverse a string using pointer

#include<iostream>
using namespace std;
int main(){
    char temp;
char str[200];
cout<<"Enter your string:";
cin.getline(str,200);
char* start=str;
char* end=str;
while(*end!='\0'){
        end++;
}
end--;
while(start<end){
    *start = temp;
    *start =*end;
    temp=*end;
    start++;
    end--;
}
cout<<"reverse string is:"<<str<<endl;
return 0;
}
