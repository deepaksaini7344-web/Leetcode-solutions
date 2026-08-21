class Solution {
public:
    int maximumSwap(int num) {
        int n =  num;
        vector<int>digits;
        while( n != 0){
            digits.push_back(n % 10);
            n /= 10;
        }
        reverse(digits.begin(),digits.end());
        vector<int>ideal_digits;
        ideal_digits = digits;
        sort(ideal_digits.begin(),ideal_digits.end());
        reverse(ideal_digits.begin(),ideal_digits.end());

        for(int i = 0 ; i < digits.size() ;i++){
            if(digits[i] != ideal_digits[i]){
                int ind1,ind2,ind3 ,key;
                key = ideal_digits[i];
                ind1 = i;
                ind3 = -1;
               for(int j = i+1 ; j < digits.size() ;j++){
                     if(digits[j] == key){
                        ind2 = j;
                        if(ind2 > ind3){
                            ind3 = ind2;
                        }
                     }
               }
               swap(digits[ind1],digits[ind3]);
               break;
            }
        }
        int maxNum = 0;
        for(int i = 0 ; i < digits.size() ;i++){
                maxNum =  maxNum * 10 + digits[i];
            }
            return maxNum;
    }
};