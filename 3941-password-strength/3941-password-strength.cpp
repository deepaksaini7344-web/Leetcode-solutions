class Solution {
public:
    int passwordStrength(string password) {
        set<char>st;
        for(int i = 0; i<password.length();i++){
            st.insert(password[i]);
        }
        int strength = 0;
        for( auto &p : st ){
            if (p >= 'a' && p<= 'z') strength += 1;
            else if (p >= 'A' && p<= 'Z') strength += 2;
            else if( p >= '0' && p <= '9') strength +=3;
            else if(p == '!' || p == '@' || p == '#' ||  p == '$') strength += 5;
        }
        return strength;
    }
};