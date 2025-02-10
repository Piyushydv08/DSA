#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  
  // int i= 1;
  //  while(i<=n){
  //   int j = 1;
  //   while(j<=1){
  //       char ch = 'A' + i +j - 2;
  //       cout<<ch;
  //       j++;
  //   }
  //   cout<<endl;
  //   i++; 
  //  }

  // int i = 1;
  // while(i<=n){
  //   int space = n- i;
  //   while(space){
  //     cout<<" ";
  //     space--;
  //   }
  //   int j = 1;
  //   while(j<=i){
  //     cout<<"*";
  //     j++;
  //   }
  //   cout<<endl;
  //   i++;
  // }

  int i = 1;
  while(i<=n){
    int space = n- i;
    while(space){
      cout<<" ";
      space--;
    }
    int j = 1;
    while(j<=i){
      cout<<j;
      j++;
    }
    int start = i-1;
    while(start>=1){
      cout<<start;
      start--;
    }
    cout<<endl;
    i++;
  }
}

    

