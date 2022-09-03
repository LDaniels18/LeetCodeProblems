class Solution {
public:
    int romanToInt(string s) {
        
        //variable to hold our outcome:
        int result = 0;
        
        //creating a map with all values at runtime:
        map<char,int> m = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        
        
        for(int i = 0; i < s.length(); i++){
            
            //if the character on the left is less than the right, we subtract the value of the left character from the result
            if(m[s[i+1]] <= m[s[i]]){
                result += m[s[i]];
            }else{
                result -= m[s[i]];
            }
        }
        
        
         return result;
        
    }
};

//solution 2:
        //creating an unordered map in C++ to hold the string and integer equivalents: (u maps hold keys, making it easier to grab an associated value)
//         unordered_map<char, int> unMap;
        
//         //inserting values into the map: (a longer way, could also just enter all this at runtime)
//         unMap['I'] = 1;
//         unMap['V'] = 5;
//         unMap['X'] = 10;
//         unMap['L'] = 50;
//         unMap['C'] = 100;
//         unMap['D'] = 500;
//         unMap['M'] = 1000;
        
//           cout << "Key - Value" << endl;

        //https://www.programiz.com/cpp-programming/unordered-map - way to output the contents of the unordered map in c++ (also see about using an iterator)

        // for(const auto& key_value: unMap) {
        // char key = key_value.first;
        // int value = key_value.second;    
        // cout << key << " - " << value << endl;
        // }
        
        //a string is a character array in C, so we can take each individual character by iterating through an array 
//         for(int i = 0; i < s.length(); i++){
            
//             //if the character on the left is less than the right, we subtract the value of the left character from the result
//             if(unMap[s[i+1]] <= unMap[s[i]]){
//                 result += unMap[s[i]];
//             }else{
//                 result -= unMap[s[i]];
//             }
//         }