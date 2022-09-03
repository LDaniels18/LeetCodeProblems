class Solution {
public:
    double average(vector<int>& salary) {
        
        //first we need to find min and max:
        
        int min = salary[0]; //some number
        int max = salary[0]; //some number
        double number = 0;
        int size = salary.size();
        int avgDiv = 0; //divisor
        
        for(int i = 0; i < size; i++){
            
            if(salary[i] < min || salary[i] == min ){
                min = salary[i];
                //cout << "Min: " << min << endl;
                //salary[i] = 0;
               // number = salary[i] + number;
                //cout << number << endl;
                
            }if(salary[i] > max || salary[i] == max){
                max = salary[i];
              // salary[i] = 0;
               // cout << "Max: " << max << endl;
              // number = salary[i] + number;
                //cout << number << endl;
            }
            
            number = salary[i] + number; //add every number in the array
            avgDiv++; //find all the "people"
            //cout << avgDiv << endl;
            
        }
        
        number = number - max - min; //get rid of the max and min
        //cout << number <<endl;
        avgDiv = avgDiv - 2; //always subtract 2 since we arent counting the max and min
        
       if(size == 3){ //only if we have 3 people
           return number;
       }else{ //everything else
           return number / avgDiv;
       }
        
    }
};