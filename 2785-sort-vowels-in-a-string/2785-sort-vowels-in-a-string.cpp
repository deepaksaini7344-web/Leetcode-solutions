class Solution {
public:
    string sortVowels(string s) {
        string vowel = "";
        string t = s;
        for(int i = 0 ;i<s.size();i++){
            if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ||s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U' ){
               vowel.push_back(s[i]);
            }
        }
        sort(vowel.begin(),vowel.end());
        int  k = 0;
        for(int i = 0 ;i<t.size();i++){
            if(t[i] == 'a' ||t[i] == 'e' ||t[i] == 'i' ||t[i] == 'o' ||t[i] == 'u' ||t[i] == 'A' ||t[i] == 'E' ||t[i] == 'I' ||t[i] == 'O' ||t[i] == 'U' ){
               t[i] = vowel[k];
               k++;
            }
        
        }
        return t;
    }
};