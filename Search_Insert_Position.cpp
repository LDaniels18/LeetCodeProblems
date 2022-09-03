class Solution {
    
public:
    
    int searchInsert(vector<int>& nums, int target) {
        
        for (int i = 0; i < nums.size(); ++i)
            
            if (target == nums[i]){ //if we find the target to be equal to some element in the array 
                
                return i; //if we find the target then we can return the postion within the array
                
            } //end of if
        
            else{
                
                if(target < nums[i]){ //if all the target is less than some element in the array, we know that we can place behind that number
                
                return i;
                    
                }
            }
        return nums.size(); //if we cannot confirm all conditions we know that the target belongs outside the array
        
        
    }//END OF SEARCH INSERT FUNCTION
};

//checks:
//we can find the target within the array -- check
//now we need to determine if we can find whether or not the target can be placed within the array -- check

//this can be modified by using Binary Search