class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            nums[i] = pow(nums[i],2);
        }
        sort(nums.begin(),nums.end());
          long long   MaxS = 0;
        for(int i = nums.size()-1 ;i>= ceil(nums.size() / 2); i--){
               MaxS += nums[i];
        }
        for(int i  = 0 ;i< nums.size()/2 ;i++){
               MaxS -= nums[i];
        }
       return MaxS;

    }
};