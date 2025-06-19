class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int index1,index2;
            // for(int i =0; i<nums.size();i++){
            //     for(int j = i+1; j<nums.size(); j++){
            //         if(nums[i]+nums[j] == target){
            //             index1 = i;
            //             index2 = j;
            //         }
            //     }
            // }
            // return {index1,index2};

        // Hasing -->>

        unordered_map<int,int>map;
        vector<int>ans;

        for(int i= 0; i < nums.size(); i++){
            int first = nums[i];
            int second = target-first;

            if(map.find(second) != map.end()){
                ans.push_back(i);
                ans.push_back(map[second]);
                break;
            }       
             map[first] = i; 
        }
    return ans;

}

};