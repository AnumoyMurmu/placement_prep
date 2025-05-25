// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  
string s="Nigga";
string a="aggiN";

sort(s.begin(), s.end());
sort(a.begin(), a.end());

if (s==a){
    cout<<"true";
}
else{
    cout<<"false";
}

    return 0;
}
