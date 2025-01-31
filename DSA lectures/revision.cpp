#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else if(n<1){
        cout<<"enter a valid value which is greater than zero";
    }
    else{
        int a=0;
        int b=1;
        int c = 0;
        for(int i=2;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        }
        cout << c;
    }
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    return fibonacci(n);
}  
