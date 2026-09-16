class Solution {
public:
    int sumOfPrimesInRange(int n) {
      
         int num = n;
         int rev = 0;
         while( num != 0){
              rev = rev *10 + num % 10;
              num /= 10;
         }
         int sum = 0;
         for( int i = min(n,rev); i<= max(n,rev) ;i++){
            if(checkPrime(i)){
          sum += i;
            }
         }
         return sum;
    }
    private:
      bool checkPrime(int a){
            if( a == 1)return false;
           
            bool flag  = true;
                for(int i  = 2; i* i <= a; i++){
                    if(a  % i == 0) return false;
                }
              return true;
        }
};