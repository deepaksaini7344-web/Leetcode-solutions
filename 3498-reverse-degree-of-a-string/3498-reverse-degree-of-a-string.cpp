class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int revdeg = 0;
        for(int i = 0 ;i<n ;i++){
            revdeg += (i+1)*(26-(s[i]-'a'));
        }
        return revdeg;
    }
};