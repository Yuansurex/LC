/*
 * @lc app=leetcode.cn id=844 lang=cpp
 *
 * [844] 比较含退格的字符串
 */

// @lc code=start
class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        // 2. 双指针：从后往前遍历，skip存放#数量
        // 是#，skip+1；
        // 不是#，skip为0：比较，不匹配返回false，匹配继续走
        // 不是#，skip不为0：skip-1

        int i = s.size() - 1, j = t.size() - 1;
        int skipS = 0, skipT = 0;

        // 两个串都要走完
        while (i >= 0 || j >= 0)
        {

            while (i >= 0)
            {
                if (s[i] == '#')
                {
                    skipS++, i--;
                }
                else if (skipS > 0)
                {
                    skipS--, i--;
                }
                else
                    break;
            }

            while (j >= 0)
            {
                if (t[j] == '#')
                {
                    skipT++, j--;
                }
                else if (skipT > 0)
                {
                    skipT--, j--;
                }
                else
                    break;
            }

            if (i >= 0 && j >= 0)
            {
                if (s[i] != t[j])
                {
                    return false;
                }
            }

            else
            {
                if (i >= 0 || j >= 0)
                {
                    return false;
                }
            }

            i--, j--;
        }

        return true;

        // 1. 重建字符串，比较

        // return build(s) == build(t);
    }

    string build(string str)
    {
        string ret;
        for (char ch : str)
        {
            if (ch != '#')
            {
                ret.push_back(ch);
            }

            else if (!ret.empty())
            {
                ret.pop_back();
            }
        }

        return ret;
    }
};
// @lc code=end
