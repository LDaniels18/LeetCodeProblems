class Solution {
public:
bool validPalindrome(string s) {
    
   int start = 0;
   int end = s.length() - 1; //an extra bit is counted with length() so we get rid of it

    while (start < end) {
        if (s[start] != s[end]) {
                return palindromeCheck(s, start, end - 1) || palindromeCheck(s, start + 1, end);
            }
        
            start++, 
            end--;
        }
        return true;
  
}
    
bool palindromeCheck(string s, int start, int end){ //helper function to determine if we have a palindrome or not....
   // int start = 0;
   // int end = s.length(); //size of the string

    while (start < end)
    {
        if (isalnum(s[start]) && isalnum(s[end])) // checking if both characters are alpha numeric
        { 
            if (tolower(s[start]) != tolower(s[end])) // once one pair of characters arent equal.... we know its not a palindrome
            {

                return false; 

            }
            
            //shifting to new characters:
            start++; 
            end--;
        }
        else
        {
            // where either one character or the other isnt alpha numeric:
            if (!isalnum(s[start]))
            {

                start++; //shift character
            }
            else
            {
                end--; //shift character
            }
            
        }
    }
    return true; //we have a palindrome
        
}
        
    
};