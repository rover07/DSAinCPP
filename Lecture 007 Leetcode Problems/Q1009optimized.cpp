class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        // optimized solution

        int ans = 1;
        for (int i = 0; i <= 30; i++)
        {

            if (ans == n)
            {
                return true;
            }
            if (ans < INT_MAX / 2) // for range nhi fatega here
                ans = ans * 2;
        }
        return false;
    }
};