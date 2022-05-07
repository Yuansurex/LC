/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        // 2. 双指针 O(n)
        int i = 0, j= nums.size()-1;
        int k=j;
        vector<int> ans(nums.size(), 0);

        while (i <= j)
        {
            int si = nums[i] * nums[i];
            int sj = nums[j] * nums[j];
            if (si > sj)
            {
                ans[k--] = si;
                i++;
            }
            else
            {
                ans[k--] = sj;
                j--;
            }
        }
        
        return ans;

        // 1.先平方，后排序 O(n + nlogn)

        // int size = nums.size();
        // for (int i = 0; i < size; i++)
        // {
        //     nums[i] = nums[i] * nums[i];
        // }

        // sort(nums.begin(), nums.end());
        // return nums;
    }
};
// @lc code=end
