class Solution {
public:
    
    //sorted squares function:
    vector<int> sortedSquares(vector<int>& nums) {
        //we need to make a new array/vector to place squared numbers:
        vector <int> squaredNums;
        //gather and square each individual element:
        for(int i = 0; i < nums.size(); i++){
            
            int element = nums[i]; //an element at an index
            int elementSquared = element*element; //the square of that element
            
            //now to push_back the values into a new vector(placing values into the vector end to front):
            squaredNums.push_back(elementSquared);
            
        }//end of for
        
        //sort the new list by using sort():
        sort(squaredNums.begin(), squaredNums.end());
        
        return squaredNums;
    }
};