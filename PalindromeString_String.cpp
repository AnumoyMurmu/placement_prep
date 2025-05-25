//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	     for(int i=0; i<S.size(); i++){
	     if(i>=S.size()/2) return 1;
         if(S[i] != S[S.size()-i-1]) return 0;
	     }
	     
	   //   return isPalindrome(S);
	}

};
