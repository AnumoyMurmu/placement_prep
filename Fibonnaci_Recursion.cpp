#include <iostream>
using namespace std;


int fib(int n){
    
    if (n==0){
        return 0;
    }else if(n==1){
    return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main() {
  
// cout<<fact(1);

cout<<fib(5);

    return 0;
}
