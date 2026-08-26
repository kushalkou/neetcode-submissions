class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> keys;

        for(int i=0; i<nums.size();i++){
            keys[nums[i]] = i;
        }

        for(int i=0; i<nums.size(); i++){

            int difference = target - nums[i];

            if(keys.count(difference) && keys[difference] != i){
                return {i, keys[difference]};
            }

        }

        return {};
        
    }
};
