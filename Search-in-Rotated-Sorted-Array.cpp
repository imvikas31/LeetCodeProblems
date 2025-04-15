class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int mid = start = (end-start)/2;

        while(start <= end){

            if(nums[mid] == target){
                return mid;
            }

            if(nums[start] <= nums[mid]) { //left sorted
                if(nums[start] <= target && nums[mid] >= target){
                    end = mid-1;
                }else{
                    start = mid+1;
                }
            }
            else{ //right sorted
                if(nums[mid] <= target && nums[end] >= target ){
                    start = mid+1;
                }else{
                    end = mid-1;
                }
            }
        }
        return -1;
    }
};