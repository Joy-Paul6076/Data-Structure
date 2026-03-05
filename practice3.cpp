#include <iostream>

using namespace std;

int main() {
    int size;
    cout <<"Enter the number of elements in the array: ";
    cin >> size;
    int arr[10];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bool visited[10] = {false};

    cout << "Element | Frequency" << endl;
    cout << "-------------------" << endl;

    
    for (int i = 0; i < size; i++) {
        
       
        if (visited[i] == true) {
            continue;
        }

        int count = 1; 
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }

        
        cout << "   " << arr[i] << "    |    " << count << endl;
    }

    return 0;
}