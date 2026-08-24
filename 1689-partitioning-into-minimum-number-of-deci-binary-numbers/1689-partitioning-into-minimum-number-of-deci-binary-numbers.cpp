class Solution {
public:
    int minPartitions(string n) {
        int max_int = INT_MIN;
        for(int i = 0 ;i< n.length() ;i++){
            int ele = n[i]-'0';
            if(ele > max_int){
                max_int = ele;
            }
        }
        return max_int;
    }
};