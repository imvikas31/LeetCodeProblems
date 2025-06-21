class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> modCount;
    modCount[0] = 1;  // To handle subarrays that themselves are divisible by k

    int count = 0;
    int currSum = 0;

    for (int i = 0; i < nums.size(); ++i) {
        currSum += nums[i];

        int mod = currSum % k;
        // Make mod positive
        if (mod < 0) mod += k;

        if (modCount.find(mod) != modCount.end()) {
            count += modCount[mod];
        }

        modCount[mod]++;
    }

    return count;
    }
};