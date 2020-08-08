class Solution {
public:
    int maxSubArray(vector<int> nums) {
        int n = nums.size();
        //Initilize current and max sum to the first element in the array
        int currSum = nums[0], maxSum = nums[0];
        
        //loop through the array
        for(int i = 1; i < n; ++i){
            //current sum will be the max sum between two indexes in the array
            currSum =  max(nums[i], currSum + nums[i]);
            //maxSum will be be the max of either the current maxsum or the new currentsum
            maxSum = max(maxSum,currSum); 
        }
        return maxSum;
    }
};
