// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printnos(int n){
    
    if(n>0){
        printnos(n-1);
        cout<<n<<endl;
    }
    
    return;
}

int main() {
    // Write C++ code here

    printnos(10);

    return 0;
}
