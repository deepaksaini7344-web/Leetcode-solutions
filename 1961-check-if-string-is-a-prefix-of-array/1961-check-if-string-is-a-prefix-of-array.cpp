class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
       int n  = s.length();
       string s1 = "";
       for(int i = 0 ;i<words.size();i++){
            s1 = s1+words[i];
            if(s1 == s) return true;
       } 
       return false;
    }
};