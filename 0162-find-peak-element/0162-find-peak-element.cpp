class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int j;
        if (n == 1)return 0;
        for(int i = 0 ;i<n ;i++){
            if (i == 0 && nums[0] > nums[1]){
                j = 0;
                break;
            }
            else if (i == n-1 && nums[i] > nums[i-1]){
                j = i;
                break;
            }
            else if ( i > 0 && i < n-1 && nums[i] > nums[i-1] && nums[i] > nums[i+1]){
                j = i;
                break;
            }
        }
        return j;
    }
};