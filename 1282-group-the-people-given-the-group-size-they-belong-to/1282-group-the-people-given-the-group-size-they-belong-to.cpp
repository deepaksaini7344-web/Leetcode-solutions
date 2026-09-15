class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size();
        vector<vector<int>>v;
        unordered_map<int,vector<int>>mpp;
        for( int i = 0 ;i<n ;i++){
            mpp[groupSizes[i]].push_back(i);
        }
        for(auto &it:mpp){
            int k = it.first;
            vector<int>second= it.second;
           int c = second.size()/k;
           int l = 0;
           for( int i = 0 ;i<c ;i++){
            vector<int>ans;
              for(int i = 0 ;i<k ;i++){
                 ans.push_back(second[l]);
                 l++;
              }
                v.push_back(ans);
           }
        } 
               return v;
    }
};