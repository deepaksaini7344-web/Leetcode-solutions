class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        int i = 0;
        int j = n - 1;
        int Alice = 0;
        int bob = 0;
        while (n--) {
            if (n % 2 == 1) {
                if (piles[i] >= piles[j]) {
                    Alice += piles[i];
                    i++;
                } else {
                    Alice += piles[j];
                    j--;
                }
            } else {
                if (piles[i] >= piles[j]) {
                    bob += piles[j];
                    j--;
                } else {
                    bob += piles[i];
                    i++;
                }
            }
        }
        if(Alice > bob) return true;
        return false;
    }
};