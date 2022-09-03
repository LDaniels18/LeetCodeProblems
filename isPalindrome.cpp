class Solution {
public:
    bool isPalindrome(int x) {
     
        //initialize variables:
        unsigned int reverse = 0; //need to be unsigned or we will get an overflow error:
        int r = 0;
        int orig_num = x;
        
        //first find the reversed number:
        while(x != 0){
           r = x % 10; // find the remainder of the mumber
           reverse = reverse * 10 + r; // take t
           x /= 10; // change the x by 10 times if possible and continue the process
            
        }
        
        //mow compare the numbers you got to the input you have:
        
//tests:
//          cout << reverse;
//          cout << orig_num;
        
        if(orig_num < 0){
            return false; //a negative number cant be a palindrome
        }
        else if(orig_num == reverse){
            return true;
        }else{
            return false;
        }
    }
};