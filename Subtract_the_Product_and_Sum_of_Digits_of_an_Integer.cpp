class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int number = n;
        int product = 1;
        int sum = 0;
        int result = 0;
    
        while(n > 0){
            product = product * (n%10);
            sum = sum + (n%10);
            n /= 10;
        }
        
        result = product - sum;
        
    return result;
    }
};
      
//     //going to have to reverse the integer since it wont come out correctly
        
//     int reverseNum = 0;
//     int remainder;
        
//         while(number){
//             remainder = number % 10;
//             reverseNum = reverseNum * 10 + remainder;
//             cout << " Digit: " << reverseNum << endl;
//             number /= 10;
//         }
        
//     //finding each individual digit in the integer:
        
//         int digit;
//         int i = 0;
        
//         while(reverseNum){
            
//             digit = reverseNum % 10;
            
//             product = product * digit;
//             sum = sum + digit;
            
//             cout << " Count: " << i << " Digit: " << digit << endl;
//             reverseNum /= 10;
            
//             i++;    
//         }
        
//         cout << "Product: " << product << endl;
//         cout << "Sum: " << sum << endl;