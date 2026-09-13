class Solution {
public:
    bool isSameAfterReversals(int num) {
       int rev1 = 0,rev2 = 0;
       int n = num;
       while( n != 0){
           rev1 = (rev1 *10) + n % 10;
           n = n/10;
       } 
       while(rev1 != 0){
        rev2 = rev2 * 10 + rev1 % 10;
        rev1 = rev1 / 10;
       }
       return (num == rev2);
    }
};