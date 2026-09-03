class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int, int> count;

        int maj = 0, max_count = 0;

        for(int num : nums){
            count[num]++;
            if(count[num]>max_count){
                maj = num;
                max_count = count[num];
            }

        }


        return maj;
    }
};