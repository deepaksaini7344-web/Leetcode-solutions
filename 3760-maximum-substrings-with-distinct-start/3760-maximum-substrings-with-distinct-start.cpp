class Solution {
public:
    int maxDistinct(string s) {
        set<char>letter;
        for(int i = 0 ;i<s.length();i++){
            letter.insert(s[i]);
        }
return letter.size();
    }
};