class Solution {
public:
    int majorityElement(vector<int>& nums) {

        //BRUTE FORCE APPROACH - T.C = O(N^2)

        // int freq  = 0;
        // int n = nums.size();
        // for(int val : nums){
        //     for(int el : nums){
        //         if(val == el){
        //             freq++;
        //         }
        //     if(freq > n/2){
        //         return el;
        //     }
        //     }
        // }
        // return -1;

        //OPTIMAL FORCE APPROACH - T.C = O(N)
        // sort(nums.begin(),nums.end());
        // int freq = 1;
        // int ans = nums[0];
        // for(int i  = 1; i  <nums.size();i++){
            
        //     if(nums[i] == nums[i-1]){
        //         freq++;
        //     }
        //     else{
        //         freq = 1;
        //         ans = nums[i];
        //     }
        //     if(freq > nums.size()/2){
        //         return ans;;
        //     }
        // }
        // return ans;

        // MOORES'S VOTING ALGORITHM - T.C = O(N)
        int freq = 0;
        int ans = 0;
        for(int i = 0;i < nums.size();i++){
            if(freq == 0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans;

    }
};