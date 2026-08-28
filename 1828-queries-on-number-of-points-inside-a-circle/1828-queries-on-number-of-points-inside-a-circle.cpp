class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>ans;
        for(int i = 0 ;i<queries.size();i++){
            int point = 0;
            for(int j = 0; j<points.size();j++){
                int x = abs(queries[i][0]-points[j][0]);
                  x = x*x;
                  int y = abs(queries[i][1]-points[j][1]);
                  y = y*y;
                  double dist = sqrt(x+y);
                  if(dist <= queries[i][2]) point++;

            }
            ans.push_back(point);
        }
        return ans;
    }
};