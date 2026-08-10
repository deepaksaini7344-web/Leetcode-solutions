class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        long long rev = 0; 
        if( num < 0){
            return false;
        }
        while( num != 0){
            rev = (rev*10) +  num % 10;;
            num /= 10; 
        }
         num = x;;
        if(num == rev) return true;
       return false;
        
    }
};