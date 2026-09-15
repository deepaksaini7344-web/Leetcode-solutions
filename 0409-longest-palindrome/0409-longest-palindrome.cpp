class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mpp;
        int n = s.length();
        for(int i = 0 ;i<n;i++){
            mpp[s[i]]++;
        }
        int odd_count = 0;
        for(auto &it : mpp){
            if(it.second % 2 == 1) odd_count++;
        }
       if (odd_count > 1) return n-odd_count+1;
       return n;
    }
};