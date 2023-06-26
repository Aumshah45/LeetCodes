class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0];
        int tempsum=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            tempsum=max(nums[i],tempsum+nums[i]);
            sum=max(sum,tempsum);
        }
        return sum;
    }
};
