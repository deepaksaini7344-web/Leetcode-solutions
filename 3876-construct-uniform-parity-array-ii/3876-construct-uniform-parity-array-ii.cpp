class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int lowest_odd  = INT_MAX;
        for(int i = 0 ;i<nums1.size();i++){
           if ( nums1[i] % 2 == 1){
                 lowest_odd = min(lowest_odd,nums1[i]);
           }
        }
        if (lowest_odd == INT_MAX) return true;
         bool flag = 1;
         for(int i = 0 ;i<nums1.size();i++){
            if(nums1[i] % 2 == 0 && nums1[i] < lowest_odd){
                flag  = 0;
                break;
            }
         }
         if(flag == 0)return false;
         return true;
    }
};