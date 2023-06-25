class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int h=nums.size()-1;
        int l=0;
        int m=0;
        while(m<=h){
            if(nums[m]==0){
                swap(nums[l],nums[m]);
                l++;m++;
            }
            else if(nums[m]==1){
                m++;
            }
            else if(nums[m]==2){
                swap(nums[m],nums[h]);
                h--;
            }
        }
    }
};
