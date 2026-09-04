class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n =  nums.size();
        int minIndex = -1;
        for(int i = 0 ;i<n ;i++){
            int maxm = *max_element(nums.begin(),nums.begin()+i);
            int minm = *min_element(nums.begin()+i,nums.end());
            int iScore = maxm-minm;
            if(iScore <= k){
              minIndex = i;
              break;
            } 
        }
        return minIndex;
    }
};