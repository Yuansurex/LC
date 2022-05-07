/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        // 2. 双指针法 O(n)
        // 快指针遍历，慢指针相当于一个栈：

        int slow = 0;

        for (int fast = 0; fast < nums.size(); fast++)
        {
            if (val != nums[fast])
            {
                nums[slow++] = nums[fast];
            }
        }
        
        return slow;

        // 1. 暴力 O(n^2)

        // int size = nums.size();
        // for (int i = 0; i < size; i++)
        // {
        //     if (nums[i] == val)
        //     {
        //         // 后面元素集体移动
        //         for (int j = i; j < size-1; j++)
        //         {
        //             nums[j] = nums[j+1];
        //         }

        //         i--;
        //         size--;
        //     }
        // }

        // return size;
    }
};
// @lc code=end
