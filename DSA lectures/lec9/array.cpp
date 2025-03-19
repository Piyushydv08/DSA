#include <iostream>
using namespace std;

int main() {
    
    //declare
    int num[15];

    //accessing an array
    cout << "Value at 13 Index : " << num[12] << endl;

    //intialising an array
    int num1[3] = {3, 45, 7};
    
    //accessing an array
    cout << "Value at 2 Index : " << num1[1] << endl;

    int num2[15] = {4, 7, 78, 327,8 ,9};
    int n=15;
    //print an array
    for(int i=0; i<n; i++){
        cout << num2[i] << " ";
    }
}