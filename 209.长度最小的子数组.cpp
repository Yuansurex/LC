/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        // 2. 双指针滑动窗口：O(n)
        //     - 窗口内是什么：满足和>=target的连续子数组
        //     - 如何移动起始：窗口值大于target就需要缩小了
        //     - 如何移动末尾：j从0遍历

        // 相当于每次找以j结尾的连续子数组的最小长度

        int size = nums.size();
        int ans = size + 1;
        int i = 0, sum = 0, len = 0;
        for (int j = 0; j < size; j++)
        {
            sum += nums[j];
            while (sum >= target)
            {
                len = j - i + 1; // 现在长度
                sum -= nums[i++]; // 左侧向右移
                ans = (ans < len) ? ans : len; //比之前小就替换
            }
            
        }

        return (ans == size + 1) ? 0 : ans;

        // 1. 暴力：O(n^2)

        // int size = nums.size();
        // int len = 0;
        // int ans = nums.size() + 1;

        // for (int i = 0; i < size; i++)
        // {
        //     int sum = 0;
        //     for (int j = i; j < size; j++)
        //     {
        //         sum += nums[j];
        //         if (sum >= target)
        //         {
        //             len = j - i + 1;
        //             ans = (ans < len) ? ans : len;
        //             break;
        //         }
        //     }
        // }

        // return (ans == nums.size() + 1) ? 0 : ans;
    }
};
// @lc code=end
