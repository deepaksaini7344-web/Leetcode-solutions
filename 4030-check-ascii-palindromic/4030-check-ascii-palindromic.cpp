class Solution {
public:
  bool isPalindromic(string s) {
        string bin2,bin3;
        for(int i = 0; i<s.length();i++){
            int  num = s[i];
            cout << num << endl;
              string bin;
            while(num != 0){
                bin += to_string(num % 2);
                num /= 2;
            }
           // cout << bin <<endl;
           while(bin.length() < 8){
             bin = bin + "0";
           }
           // cout << bin <<endl;
          reverse(bin.begin(),bin.end());
          bin2 = bin2 + bin;
        }
       // cout << "bin2 = " << bin2 << endl;
        bin3 = bin2;
        reverse(bin3.begin(),bin3.end());
        // cout << "bin3 = " << bin3 << endl;
           return (bin2 == bin3);
    }
};