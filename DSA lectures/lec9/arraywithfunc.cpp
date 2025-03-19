#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int third[15] = {2, 7};
    int n = 15;
    printArray(third, 15);

    int fourth[10] = {0};
    int m = 10;
    printArray(fourth, 10);

    //for size of array
    int fourthsize = sizeof(fourth)/sizeof(int);
    cout << fourthsize << endl;


    //taking input in array
    // for(int i=0; i<size; i++){
    //     cin >> num[i];
    // }
}