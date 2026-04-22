//Length of a string using pointer
#include <iostream>
using namespace std;

int main() {

    char str[100];
    cout<<"Enter your string name:";
    cin.getline(str,100);
    char* ptr = str;
    int length = 0;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    cout << "Length: " << length << endl;
    return 0;
}

