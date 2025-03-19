#include <iostream>
using namespace std;

// if function does not return anything then we use void

void printcounting(int n) {
    for(int i=1; i<=n; i++){
        cout << i <<" ";

    }
    cout << endl;
}

int power(int a, int b) {
    int ans = 1;
    for(int i=1; i<=b; i++){
        ans = ans*a;
    }
    return ans;
}

int main() {
    int a, b;
    cin >> a >> b;

    int answer1 = power(a, b);
    cout << "Answer is : " << answer1 << endl;

    int c, d;
    cin >> c >> d;

    int answer2 = power(c, d);
    cout << "Answer is : " << answer2 << endl;

    int n;
    cin >> n;
    
    //function call
    printcounting(n);
    return 0;

}