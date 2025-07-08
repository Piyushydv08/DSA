#include <iostream>
using namespace std;

int main() {
    // int num = 6;
    // int *p = &num;
    // cout << num;
    // p++;
    // cout << num;

    int i=3;
    int *t = &i;
    *t = *t+1;
    cout << t << endl;
    t = t+1;
    cout << "after" << t << endl;
}