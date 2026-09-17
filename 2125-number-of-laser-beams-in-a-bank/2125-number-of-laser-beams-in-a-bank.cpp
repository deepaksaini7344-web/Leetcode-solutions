class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int m = bank[0].size();
        vector<int>ans;
        for(int i = 0 ;i<n ;i++){
            int count = 0;
            for(int j = 0;j<m ;j++){
                if(bank[i][j] == '1')count++;
            }
            if(count > 0)ans.push_back(count);
        }
        int sum = 0;
        if(ans.size() <= 1) return 0;
        else{
            for(int i = 0 ;i<ans.size()-1;i++){
                sum += ans[i]*ans[i+1];
            }
        }
        return sum;
    }
};