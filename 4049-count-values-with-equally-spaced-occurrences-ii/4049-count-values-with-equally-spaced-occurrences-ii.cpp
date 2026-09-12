class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        set<int>st;
        unordered_map<int,vector<int>>ind;
        for(int i = 0 ;i<n ;i++){
            ind[nums[i]].push_back(i);
            }
            for(auto &it :ind){
                auto &it2 = it.second;
                int flag = 1;
                if(it2.size() >= 3){
                    int k = it2[1]-it2[0];
                    for(int i = 2;i<it2.size();i++){
                        if(it2[i]-it2[i-1] != k){
                            flag =0;
                            break;
                        }
                    }
                     if(flag){
                        st.insert(it.first);
                }
            }
            }
        return st.size();
    }
};