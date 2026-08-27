class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int k = 0;
        int n = spaces.size();
        for(int i = 0;i<s.size();i++){
             if(k < n && i == spaces[k]){
                ans.push_back(' ');
                k++;
             }
                ans.push_back(s[i]);
        }
        return ans;
    }
};