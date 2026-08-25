class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        int hash[201] = {0};
        for (int i = 0; i < n; i++) {
            hash[nums[i]]++;
        }
        int j;
        for (int i = k; i <= 200; i = i + k) {
            if (hash[i] == 0) {
                j = i;
                break;
            }
        }
        return j;
    }
};