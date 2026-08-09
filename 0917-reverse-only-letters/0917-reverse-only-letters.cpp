class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.length();
        int i = 0;
        int j = n-1;
        while(i<j){
            int a = int(s[i]);
            int b = int(s[j]);
            while(i<j && !(( a >= 65 && a <= 90) || ( a >= 97 && a <= 122))) {
                   i++;
                   a = int(s[i]);
            }
            while( j>i &&!(( b >= 65 && b <= 90) || ( b >= 97 && b <= 122))) {
                   j--;
                   b = int(s[j]);
            }
            if(i<j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};