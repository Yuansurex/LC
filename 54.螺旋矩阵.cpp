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
        vector<int> ans;
        int m = matrix.size(); // 行
        int n = matrix[0].size();  // 列
        int size = m*n;

        int left = 0, right = n - 1, top = 0, down = m - 1;

        int cnt = 0;
        while (cnt < size)
        {
            // 向右
            for (int i = left; i <= right; i++)
            {
                ans.push_back(matrix[top][i]);
                cnt++;
            }
            if (cnt < size)
            {
                top++;
            }
            else break;
            
            

            // 向下
            for (int i = top; i <= down; i++)
            {
                ans.push_back(matrix[i][right]);
                cnt++;
            }
            if (cnt < size)
            {
                right--;
            }
            else break;

            // 向左
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[down][i]);
                cnt++;
            }
            if (cnt < size)
            {
                down--;
            }
            else break;

            // 向上
            for (int i = down; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
                cnt++;
            }
            if (cnt < size)
            {
                left++;
            }
            else break;
        }


        return ans;
    }
};
// @lc code=end
