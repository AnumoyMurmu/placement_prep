Given an integer N, print an inverted isosceles triangle of stars such that the height of the triangle is N.

 

Example 1:

Input:
N = 4
Output:
*******
 *****
  ***
   *
Example 2:

Input:
N = 3
Output:
*****
 ***
  *



Ans:
for (int i = 0; i < N; i++) {
        // Print leading spaces
        for (int space = 0; space < i; space++) {
            cout << " ";
        }

        // Print stars
        for (int star = 0; star < 2 * (N - i) - 1; star++) {
            cout << "*";
        }

        // Move to the next line
        cout << endl;
        }
