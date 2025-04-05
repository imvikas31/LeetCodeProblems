class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>set;

        for(int val : nums){
            if(set.find(val) != set.end()){
                return val;
            }
            set.insert(val);
        }
        return -1;
    }
};