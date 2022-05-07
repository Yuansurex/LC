/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        // 2. 双指针
        int slow = 0;
        int size = nums.size();
        
        for (int fast = 0; fast < size; fast++)
        {
            if (0 != nums[fast])
            {
                nums[slow++] = nums[fast];
            }
        }

        for (int i = slow; i < size; i++)
        {
            nums[i] = 0;
        }
        
        

        // // 1. 暴力
        // int size = nums.size();
        // int src = size;

        // for (int i = 0; i < size; i++)
        // {
        //     if (0 == nums[i])
        //     {
        //         for (int j = i + 1; j < size; j++)
        //         {
        //             nums[j - 1] = nums[j];
        //         }
        //         i--;
        //         size--;
        //     }
        // }

        // // 补零
        // for (int i = size; i < src; i++)
        // {
        //     nums[i] = 0;
        // }
    }
};
// @lc code=end
