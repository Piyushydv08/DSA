#include <iostream>
using namespace std;

void update(int *p ) {
    //p = p+1;
    //cout << "Inside" << p << endl;
    *p = *p +1;
}

int getSum(int arr[], int n) {
    cout << endl << "Size : " << sizeof(arr) << endl;
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main(){
    int value = 5;
    int *p = &value;
    cout << "Before : " << *p << endl;
    update(p);
    cout << "After  : " << *p << endl;

    int arr[6] = {1,2,3,4,5,6};
    cout << "Sum is : " << getSum(arr, 3) << endl;
    cout << "Sum is : " << getSum(arr+3, 3) << endl;
    return 0;
 }