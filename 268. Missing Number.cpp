class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int size=nums.size();
       int sum=size*(size+1)/2;
       int element=0;
       for(int i=0;i<size;i++){
           sum=sum-nums[i];
                 } 
       return sum;
    }
};
