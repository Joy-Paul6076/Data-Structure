#include <iostream> 
using namespace std;

int main()
{
    int i, j;
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[3][3] = {1, 3, 5, 7, 9, 2, 4, 6, 8};

    cout << "Array 'a':" << endl;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nResult (a[i][j] + b[j][i]):" << endl;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
        
          
            cout << a[i][j] + b[j][i] << " ";
        }
        cout << endl; 
    }

    return 0; 
}