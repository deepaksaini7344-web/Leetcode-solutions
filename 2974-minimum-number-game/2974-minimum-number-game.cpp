class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>min_pq; // minimum element at top
        int n = nums.size();
        for(int i = 0 ;i<n ;i++){
            min_pq.push(nums[i]);
        }
        vector<int>ans;
         while(!min_pq.empty()){
            int a =  min_pq.top(); // smallest element
            min_pq.pop();
            int b = min_pq.top(); // second smallest element
             min_pq.pop();
             ans.push_back(b); // first push-back second smallest element then first
             ans.push_back(a);  

         }
         return ans;
    }
};