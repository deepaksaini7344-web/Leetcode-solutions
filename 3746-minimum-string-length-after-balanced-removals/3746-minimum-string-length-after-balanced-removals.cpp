class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int count_a = 0;
        int count_b = 0;
        for(int i = 0 ;i<s.length();i++){
            if(s[i] =='a'){
                count_a++;
            }
            else{
                count_b++;
            }
        }
        int min_length = s.length()-2*min(count_a,count_b);
        return min_length;
    }
};