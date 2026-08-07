class Solution {
public:
    int smallestNumber(int n, int t) {
        int prod;
        do{
             prod = 1;
             int num = n;
            while( num != 0){
                prod  *= ( num % 10);
                num /= 10; 
            } 
            n++;
        }while(prod % t != 0);
        return n-1;
    }
};