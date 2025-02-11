#include <iostream>
using namespace std;

int main() {
    // int a = 4;
    // int b = 6;

    // cout << "a & b - " << (a & b) << endl;
    // cout << "a | b - " << (a | b) << endl;
    // cout << "a ^ b - " << (a ^ b) << endl;
    // cout << "~a - " << (~a) << endl;

    // cout << (5 << 1) << endl;
    // cout << (17 >> 1) << endl;
    // cout << (17 >> 2) << endl;
    // cout << (17 >> 3) << endl;

    int n;
    cin >> n;
     int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += i;
    }
    cout << sum << endl;
}