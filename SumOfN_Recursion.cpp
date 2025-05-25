// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int sumofn(int n){
    if (n<=1) return n;
    return n+sumofn(n-1);
}


int main() {
  
// cout<<fact(1);

cout<<sumofn(5);

    return 0;
}
