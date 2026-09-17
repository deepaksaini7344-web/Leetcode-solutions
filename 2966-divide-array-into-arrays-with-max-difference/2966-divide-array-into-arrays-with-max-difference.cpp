class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int p = nums.size()/3;
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        vector<vector<int>>res2;
        int l = 0;
        for(int i = 0 ;i<p ;i++){
            vector<int>ans;
            for(int i = 0 ;i<3;i++){
                ans.push_back(nums[l]);
                l++;
            }
            if(ans[2]-ans[0] > k) return res2;
            else{
                res.push_back(ans);
            }
        }
        return res;
    }
};