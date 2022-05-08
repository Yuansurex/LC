/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> ans(n, vector<int>(n, 0));

        int cnt = 1, size = n * n;
        int left = 0, right = n - 1, top = 0, down = n - 1;
        while (cnt <= size)
        {
            // 向右
            for (int i = left; i <= right; i++)
            {
                ans[top][i] = cnt++;
            }
            top++;

            // 向下
            for (int i = top; i <= down; i++)
            {
                ans[i][right] = cnt++;
            }
            right--;

            // 向左
            for (int i = right; i >= left; i--)
            {
                ans[down][i] = cnt++;
            }
            down--;

            // 向上
            for (int i = down; i >= top; i--)
            {
                ans[i][left] = cnt++;
            }
            left++;
        }
        return ans;
    }
};
// @lc code=end
