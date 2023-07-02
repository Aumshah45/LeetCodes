class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        
        int dx = coordinates[1][0] - coordinates[0][0]; 
        int dy = coordinates[1][1] - coordinates[0][1]; 
        
        for(int i = 2; i < n; i++) {
            int x1 = coordinates[i][0] - coordinates[0][0]; 
            int y1 = coordinates[i][1] - coordinates[0][1]; 
            
            if(x1 * dy != y1 * dx) return false; 
        }
        
        return true;
    }
};
