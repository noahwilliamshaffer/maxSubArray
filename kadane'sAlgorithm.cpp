class Solution {
public:
    int maxSubArray(vector<int> nums) {
        //Kadanes Algorithm
        
        int n = nums.size();
        int maxSum = nums[0];
        for(int i = 1; i < n; ++i){
            //if the previous number is greater than zero
            if(nums[i-1] > 0)   nums[i] += nums[i-1];
            
            //whichever is larger between nums[i] and maxSum, assign to maxSum
            maxSum = max(nums[i], maxSum);
        }
            
        return maxSum;
            
        }
        
};
