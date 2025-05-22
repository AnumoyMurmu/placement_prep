Geek is very fond of patterns. Once, his teacher gave him a pattern to solve. He gave Ram an integer n and asked him to build a pattern.
Help Ram build a pattern.

Example 1:

Input: 5
Output:
    *
   ***  
  *****
 *******
*********


ans:
for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }

        // Print stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "*";
        }

        // Move to next line
        cout << endl;
    }
