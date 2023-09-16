class Solution {
public:
    int romanToInt(string s) {
        
        map<char ,int> value_pairs;

        value_pairs['I'] = 1;
        value_pairs['V'] = 5;
        value_pairs['X'] = 10;
        value_pairs['L'] = 50;
        value_pairs['C'] = 100;
        value_pairs['D'] = 500;
        value_pairs['M'] = 1000;
        int result = 0;
        for(int i = 0 ; i < s.size(); ){
            
            if(value_pairs[s[i]] < value_pairs[s[i+1]]){
                 result += value_pairs[s[i+1]] - value_pairs[s[i]];
                 
                 i+=2;
                 
            }
            else{
                result += value_pairs[s[i]]; 
                i++;
            }
        }
        return result;
    }
};
