#include<iostream>
using namespace std;
 
int average(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum/n;
}
void computeRanks(int avg[], int n, int ranks[]){
    for(int i=0; i<n; i++){
        ranks[i] = 1;
        for(int j=0; j<n; j++){
            if(avg[j] > avg[i]){
                ranks[i]++;
            }
        }
    }
}
struct Student{
    string name;
    int roll_no;
    int marks[6];
};
int main(){
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    Student students[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the name of student "<<i+1<<": ";
        cin>>students[i].name;
        cout<<"Enter the roll number of student "<<i+1<<": ";
        cin>>students[i].roll_no;
        cout<<"Enter the marks of 6 subjects for student "<<i+1<<": ";
        for(int j=0; j<6; j++){
            cin>>students[i].marks[j];
        }
    }
    int avg[n];
    for(int i=0; i<n; i++){
        avg[i] = average(students[i].marks, 6);
    }

    int ranks[n];
    computeRanks(avg, n, ranks);


    int *idx = new int[n];
    for(int i=0; i<n; i++){
        idx[i] = i;
    }

    
    for(int i=0; i<n-1; i++){
        int minPos = i;
        for(int j=i+1; j<n; j++){
            if(students[idx[j]].roll_no < students[idx[minPos]].roll_no){
                minPos = j;
            }
        }
        if(minPos != i){
            int tmp = idx[i];
            idx[i] = idx[minPos];
            idx[minPos] = tmp;
        }
    }

    cout << "Roll No | Rank" << endl;
    for(int k=0; k<n; k++){
        int i = idx[k];
        cout << students[i].roll_no << " | " << ranks[i] << endl;
    }

    delete[] idx;

    return 0;
}