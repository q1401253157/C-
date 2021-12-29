class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        return judge(grid,0,0,grid[0][0]);
    }
private:
    int judge(vector<vector<int>>& grid,int i ,int j,int sum){
        if(i==grid.size()-1&&j==grid[0].size()-1) return sum;
        if(j==grid[0].size()-1) sum = sum + grid[++i][j];
        else if(i==grid.size()-1) sum = sum + grid[i][++j];
        else if(grid[i][j+1]>grid[i+1][j]) sum = sum + grid[i][++j];
        else sum = sum + grid[++i][j];
        int a = judge(grid,i,j,sum);
        return a;
    }
};//贪心算法只能求得局部最优 因此不合适

class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size() + 1, vector<int>(grid[0].size() + 1));
        for (int i = 1; i < dp.size(); i++) {
            for (int j = 1; j < dp[0].size(); j++) {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + grid[i - 1][j - 1];
            }
        }
        return dp[grid.size()][grid[0].size()];

    }
};//动态规划  建立转移矩阵，转移矩阵的方程逻辑是上一个和左一个的最大值与当前值的和