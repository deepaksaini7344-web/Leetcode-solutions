class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        long long chalk_sum = 0;
        for(int i = 0 ;i<n;i++){
            chalk_sum += chalk[i];
        }
       while(k >= chalk_sum){
        k -= chalk_sum;
       }
        int j;
        for(int i=0;i<n;i= (i+1)%n){
            if(k<chalk[i]){
               j = i;
               break;
            }
            k -= chalk[i];
        }
        return j;
    }
};