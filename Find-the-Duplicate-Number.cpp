class Solution {
public:
    int findDuplicate(vector<int>& nums) {


        //Approach -->> 1 -->>  Using Unordered Set -->>

        // unordered_set<int>set;
        // for(int val : nums){
        //     if(set.find(val) != set.end()){
        //         return val;
        //     }
        //     set.insert(val);
        // }
        // return -1;

        //Approach -->> 2 -->> Slow & Fast Pointer Approach -->>

        int slow  = nums[0];
        int fast  = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);

        slow = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};