#include <iostream>
using namespace std;


int main() {
  
string s="Nigga";
string ans;
int n=s.size();

for(int i=n-1; i>=0; i--){
    ans+=s[i];
}

cout<<ans;

    return 0;
}
