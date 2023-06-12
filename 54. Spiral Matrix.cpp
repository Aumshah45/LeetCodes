class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        int tot=row*col;
        int startrow=0;
        int startcol=0;
        int endrow=row-1;
        int endcol=col-1;
        while(count<tot){
            for(int index=startcol;count<tot && index<=endcol;index++){
                ans.push_back(matrix[startrow][index]);
                count++;
            }
startrow++;
for(int index=startrow;count<tot && index<=endrow;index++){
    ans.push_back(matrix[index][endcol]);
    count++;
}
endcol--;
for(int index=endcol;count<tot && index>=startcol;index--){
ans.push_back(matrix[endrow][index]);
count++;
}
endrow--;
for(int index=endrow;count<tot && index>=startrow;index--){
    ans.push_back(matrix[index][startcol]);
    count++;
}
startcol++;
        }
        return ans;
    }
};
