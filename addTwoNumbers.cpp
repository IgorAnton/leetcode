class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
       map<int, int> complement_prefix;

        for(int i = 0 ; i < nums.size() ; i++){
            complement_prefix[nums[i]] = i;
        }
        vector<int> retVal;

        for(int i = 0 ; i < nums.size(); i++){
            int cmpl = target - nums[i];
            if(complement_prefix.count(cmpl) && complement_prefix[cmpl] !=i){
                retVal.push_back(i);
                retVal.push_back(complement_prefix[cmpl]);
                return retVal;
            }
        }

        return retVal;
    }
};
