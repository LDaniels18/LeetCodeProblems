// The API is BadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        // example of a binary search:
        
        int start = 0;
        int end = n;
        int answer = -1; //to catch the answer as the "new" middle value
        
        while(start <= end){
            
            int middle = start + (end - start) / 2; //calculate middle this way to negate any overflow error
            
            
            if(isBadVersion(middle) == true){ //then we need to check the left half of the set
                end = middle - 1;
                answer = middle;
            }
            else{ //we know the bad will be in the set after the middle
                
                start = middle + 1; 
            }
            
        }
        return answer;
    }
};