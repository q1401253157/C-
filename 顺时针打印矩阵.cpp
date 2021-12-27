matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> solution = {};
        if(matrix.size()==0) return solution;
        int n = 0, i = 0, j = 0;
        while (n != matrix.size() * matrix[0].size()) {
            while (j < matrix[0].size()&&matrix[i][j] != -999 ) {
                solution.push_back(matrix[i][j]);
                matrix[i][j] = -999;
                n++;
                j++;
                if (j == matrix[0].size()) break;
            }
            i++;
            j--;
            while ( i < matrix.size()&&matrix[i][j] != -999 ) {
                solution.push_back(matrix[i][j]);
                matrix[i][j] = -999;
                n++;
                i++;
                if (i == matrix.size()) break;
            }
            i--;
            j--;
            while (j >= 0&&matrix[i][j] != -999 ) {
                solution.push_back(matrix[i][j]);
                matrix[i][j] = -999;
                n++;
                j--;
                if (j < 0) break;
            }
            i--;
            j++;
            while (i >= 0&&matrix[i][j] != -999 ) {
                solution.push_back(matrix[i][j]);
                matrix[i][j] = -999;
                n++;
                i--;
                if (i < 0) break;
            }
            i++;
            j++;
        }
        return solution;

       
    }

};