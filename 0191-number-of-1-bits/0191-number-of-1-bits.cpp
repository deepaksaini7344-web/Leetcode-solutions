class Solution {
public:
    int hammingWeight(int n) {
         string bin = "";
         while( n != 0){
           bin += (n % 2 ? '1' :'0');
           n /= 2;
         }
         int setbit = count(bin.begin(),bin.end(),'1');
         return setbit ;
    }
};