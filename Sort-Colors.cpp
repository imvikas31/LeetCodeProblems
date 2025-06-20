class Solution {
public:
    void sortColors(vector<int>& nums) {
    //Approach :01: O(nlogn)

        // using c++ inbuilt sort method 
        // but in question it is mentioned we do not have to use this --->>

        // sort(nums.begin(),nums.end());

    //Approach :02: Counting Method -> O(n)

        //usind this method we will count frequency of all these three items
        // but this will bot sort items in place, we have to overwrite the items
        // in the array means put starting elements of array as  zero's equal to
        // its frequecy and so on for one's and two's

        // int n = nums.size();
        // int zeros = 0, ones = 0, twos = 0;

        // for(int i = 0; i<n;i++){
        //     if(nums[i] == 0){
        //         zeros++;
        //     }
        //     else if(nums[i] == 1){
        //         ones++;
        //     }
        //     else{
        //         twos++;
        //     }
        // }
        // int index = 0;
        // for(int i = 0;i<zeros; i++){
        //     nums[index] = 0;
        //     index++;
        // }
        // for(int i = 0;i<ones; i++){
        //     nums[index] = 1;
        //     index++;
        // }
        // for(int i = 0;i<twos; i++){
        //     nums[index] = 2;
        //     index++;
        // }

    // Approach:02: Optimal Approach ->O(n) but in place sorting
    // Using DNF:Dutch National Flag Algorithm

    int low = 0, mid = 0, high = nums.size()-1;
    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            mid++;
            low++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[high], nums[mid]);
            high--;
        }
    } 

    }
};