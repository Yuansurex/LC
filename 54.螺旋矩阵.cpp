/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        int m = matrix.size();    // 行
        int n = matrix[0].size(); // 列
        int size = m * n;
        vector<int> ans(size, 0);

        int left = 0, right = n - 1, top = 0, down = m - 1;

        int cnt = 0;
        while (cnt < size)
        {
            // 向右
            for (int i = left; i <= right && cnt < size; i++)
            {
                ans[cnt++] = matrix[top][i];
                
            }
            top++;

            // 向下
            for (int i = top; i <= down && cnt < size; i++)
            {
                ans[cnt++] = matrix[i][right];
                
            }
            right--;

            // 向左
            for (int i = right; i >= left && cnt < size; i--)
            {
                ans[cnt++] = matrix[down][i];
                
            }
            down--;

            // 向上
            for (int i = down; i >= top && cnt < size; i--)
            {
                ans[cnt++] = matrix[i][left];
                
            }
            left++;
        }

        return ans;
    }
};
// @lc code=end
