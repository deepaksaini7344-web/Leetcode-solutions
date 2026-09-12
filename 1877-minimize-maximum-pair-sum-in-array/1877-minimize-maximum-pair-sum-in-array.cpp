class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n  = nums.size();
       sort(nums.begin(),nums.end());
        int sum ;
        int max_sum = 0;
        for(int i = 0;i<n;i++){
            sum = nums[i]+nums[n-1-i];
            max_sum = max(max_sum,sum);
        }
        return max_sum;
    }
};