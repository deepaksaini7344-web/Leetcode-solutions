class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
           unordered_map<int ,int>mp;
           for(int i = 0 ; i<n ;i++){
                 mp[nums[i]]++;
           }
           while(!mp.empty()){
            vector<int>a;
            for(auto p  = mp.begin(); p != mp.end();){
                    a.push_back(p->first);
                    p->second--;
            if (p->second == 0){
                p = mp.erase(p);
            }
            else{
                p++;            
            }
           }
           ans.push_back(a);
           }
           return ans;
    }
};