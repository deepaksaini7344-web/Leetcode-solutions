class Solution {
public:
    int firstMatchingIndex(string s) {
        int n = s.length();
        for(int i = 0;i<n;i++){
            if(s[i] == s[n-1-i])return i;
        }
        return -1;
    }
};