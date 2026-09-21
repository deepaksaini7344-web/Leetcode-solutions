class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size();
        int n = grid[0].size();
        int k = grid[0][0] % x;
        for(int i = 0 ;i<m ;i++){
            for(int j = 1 ;j<n ;j++){
              if(grid[i][j] % x != k) return -1;
            }
        }
        vector<int>num;
        for(int i = 0 ;i<m ;i++){
            for(int j = 0 ;j<n ;j++){
             num.push_back(grid[i][j]);
            }
        }
        sort(num.begin(),num.end());
        int p =(m*n)/2;
        int mean = num[p];
        int op  = 0;
         for(int i = 0 ;i<m ;i++){
            for(int j = 0 ;j<n ;j++){
              op += abs(mean - grid[i][j])/x;
            }
        }
        return op;
    }
};