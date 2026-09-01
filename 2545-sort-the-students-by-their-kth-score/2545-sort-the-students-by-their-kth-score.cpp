class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        for(int i = 0 ; i<score.size()-1 ; i++){
            int maxm  = score[i][k];
            int maxRowIndex = i ;
            for(int j =  i+1; j<score.size() ;j++){
                   if(score[j][k] > maxm){
                    maxm = score[j][k];
                    maxRowIndex = j;
                   }
            }
            if( i != maxRowIndex){
                swap(score[i],score[maxRowIndex]);
            }
        }
        return score;
    }
};