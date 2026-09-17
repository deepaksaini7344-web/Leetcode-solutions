class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        int Icount = 0;
        sort(costs.begin(),costs.end());
        for(int i = 0 ;i<n ;i++){
            if (coins >= costs[i]){
                Icount++;
                coins -= costs[i];
            }
            else{
                break;
            }
        }
        return Icount;
    }
};