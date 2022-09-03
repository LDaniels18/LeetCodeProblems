class Solution {
public:
    int divideNumbers(int result){
        
        int countOfDigits = 0; //to count the digits we get of a particular number
        
        //we need to divide that element by 10 until we cant anymore:
            while(result > 0){
                result = result / 10;
                countOfDigits++; //the count goes up again an the while loop continues
               
            } //end of while
        return countOfDigits;
    }
    
    //finding the numbs in the vector:
    int findNumbers(vector<int>& nums) {
        
        
        int countOfPosNums = 0; //count of the num of positive nums
        //int flag = 1; //a flag to break the while loop
        
        for(int i=0; i < nums.size(); i++){
            
            
            
            //first things first, we need to get an element
            int element = nums[i];
            
            //call function to divide the element by 10 as many times as possible:
            
            
//             //we need to divide that element by 10 until we cant anymore:
//             while(result > 0){
//                 result = element / 10;
//                 countOfDigits++; //the count goes up again an the while loop continues
//                 // //now checking if the number can be divided by 10 again
//                 // if(result < 0 || result == 0){
//                 //     flag = 0;
//                 // }  
//             } //end of while
            
            //now we determine if it has a pos number of digits and add to the counter:
            if(divideNumbers(element) % 2 == 0){
                countOfPosNums++; //then the number has a positive number of digits
            }//end of if
            
        }//end of for
        
        return countOfPosNums;
    }
    
    
};