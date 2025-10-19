class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix[0].size();
        int n = matrix.size();

        int i = 0;
        int j = m - 1;
        int k=n-1;
        int l=0;

        bool flag = false;

        while (i < n && j >= 0) {
            int p1 = matrix[i][j];
         // int p2=matrix[k][l];

            if (target == p1 ) {
                flag = true;
                break;
            } else if (target < p1 ) {
                j--;
                
            } else {
                i++;
              
            }
        }
        return flag;
    }
};