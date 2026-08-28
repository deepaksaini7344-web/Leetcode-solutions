class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<n;i++){
            int rev = 0;
            int num2 = nums[i];
            while(num2 != 0){
                rev = rev*10 +(num2 % 10);
                num2 /= 10;   
            }
            nums.push_back(rev);
        }
          set<int>st;
        for(int i = 0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        return st.size();
    }
};