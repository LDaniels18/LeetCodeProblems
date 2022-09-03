class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //variable to hold the count:
        
        int Onescount = 0;
        int runningCount = 0;
        //finding the ones in the array:
        for(int i = 0; i < nums.size(); i++){
            
            int element = nums[i]; //to catch a zero or one 
            
            //now to find all the ones:
            //where the element is a 0 we want to restart the count (new window):
            if (element == 0){
                
                Onescount = 0;
                
            //where the element is a 1:
            }else{
                
                Onescount++;    
            }
            //determining this end window:
                if(runningCount < Onescount){
                    runningCount = Onescount;
                    //running count will carry the total of ones (consecutive), while ones count counts all the ones
                }
        }
         //returning the answer at the end of the for loop iterations:
        return runningCount;
     }
       
};