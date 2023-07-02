class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxp=0;
        int mins=prices[0];
        for(int i=0;i<n;i++){
            mins=min(mins,prices[i]);
            maxp=max(maxp,prices[i]-mins);
        }
return maxp;
    }
};
