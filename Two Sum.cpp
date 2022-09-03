class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
         //we need a vector to hold answers:
       vector<int> answer; //
        
//submission 1: (accepted)
        
        //access elements of the vector:
//         for(int i = 0; i < nums.size(); i++){
            
//             int j = i+1; //to ensure that the same element isnt used, even if it does answer the promt
            
//             //using a second loop to check every element after i
//             while(j < nums.size()){
                
//                 if(nums[i] + nums[j] == target){
                    
//                     // testing output
//                     cout << "i: " << nums[i];
//                     cout << "j: " << nums[j];
                    
//                     //need to place the indexes onto a seperate vector to then output as an answer 
//                     answer.push_back(i);
//                     answer.push_back(j);
                    
//                     return answer; //return the contents of vector as an answer
//                 }
                
//                 j++; //j is always incrementing by 1 until it reaches the same size as the total vector size
//             }
            
//         } //end of the for loop
        
//         return answer; //to get rid of the "all control paths error"
        
// Submission 2: (accepted)
        
        //for loop to iterate across the vector
        for(int i = 0; i < nums.size(); i++){ //note that we would probably need to make the size - 1 adjustment in case of an overflow error
            //second for loop that needs to start from i+1
            for(int j = i+1; j < nums.size(); j++){
                
                if(nums[i] + nums[j] == target){
                    
                    // testing output
                    cout << "i: " << nums[i];
                    cout << "j: " << nums[j];
                    
                    //need to place the indexes onto a seperate vector to then output as an answer 
                    answer.push_back(i);
                    answer.push_back(j);
                    
                    return answer; //return the contents of vector as an answer
                }
                
            } //end of inside for loop
        } //end of the outside for loop
        
        return answer;
        
    }// end of the function
};