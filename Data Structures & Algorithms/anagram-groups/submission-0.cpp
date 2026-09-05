class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // 1. make a map from <something> to list of strings
        
        unordered_map<string, vector<string>> groups;


        // 2. for each string s:
        //      compute its key
        //      push s into map[key]

        for(const auto& s : strs){

            string sorted = s;
            sort(sorted.begin(), sorted.end());
            groups[sorted].push_back(s);

        }

        // 3. push every value of the map into the result


        vector<vector<string>> result;
        for(auto& pair : groups){
            result.push_back(pair.second);
        }

        return result;

    }
};
