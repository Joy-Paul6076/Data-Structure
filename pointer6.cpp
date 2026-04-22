//program to count vowel and consonant

#include <iostream>
using namespace std;
bool isvowel(char x){
x=tolower(x);
return(x=='a'||x=='e'||x=='i'||x=='o'||x=='u');
}
int main(){
char str[100];
cout<<"Enter your string:";
cin.getline(str,100);
char *ptr = str;
int vowel=0,consonant=0;
while(*ptr!='\0'){
    if(isalpha(*ptr)){
        if(isvowel(*ptr))
            vowel++;

        else
            consonant++;
    }
    ptr++;
}
cout<<"Number of vowel:"<<vowel<<endl;
cout<<"number of consonant:"<<consonant<<endl;
return 0;
}

