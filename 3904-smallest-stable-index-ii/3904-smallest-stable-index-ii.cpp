class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
         int n =  nums.size();
        int minIndex = -1;
      vector<int>preff(n);
      vector<int>suff(n);
       int maxValue = INT_MIN;
       int minValue  = INT_MAX;
       for(int i = 0 ;i<n ;i++){
          maxValue = max(maxValue,nums[i]);
          preff[i] = maxValue;
       }
       for(int i = n-1 ;i>= 0 ;i--){
         minValue = min(minValue,nums[i]);
         suff[i] = minValue;
       }
       for(int i = 0; i<n ;i++){
          if(preff[i]-suff[i] <= k){
            minIndex = i;
            break;
          }
       }
       return minIndex;
    }
};