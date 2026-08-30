class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minInd = -1;
        int maxInd = -1;
        int minEle = INT_MAX;
        int maxEle = INT_MIN;
        for(int i = 0 ;i<n;i++){
            if(nums[i] > maxEle){
                maxEle = nums[i];
                maxInd = i;
            }
             if(nums[i] < minEle){
                minEle = nums[i];
                minInd = i;
            }
        }
        int way1 = min(minInd+1,n-minInd) + min(maxInd+1,n-maxInd);
        int way2 = max(minInd+1,maxInd+1);
        int way3 = max(n-minInd,n-maxInd);
       
            int minWays = min({way1,way2,way3});
            return minWays;
    }
};