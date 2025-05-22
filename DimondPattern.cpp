Diamond Pattern Logic (For n = 4):
markdown
Copy
Edit
   *    
  ***   
 *****  
******* 
 *****  
  ***   
   *    

Ans:
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }
        // Print stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }
        // Print stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
