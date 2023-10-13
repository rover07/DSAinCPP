// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

#include <iostream>
using namespace std;

/* class Solution
{
public:
    int subtractProductAndSum(int n)
    {

        int prod = 1;
        int sum = 0;

        while (n != 0)
        {

            int digit = n % 10;
            prod = prod * digit;
            sum = sum + digit;

            n = n / 10;
        }

        int answer = prod - sum;
        return answer;
    }
}; */

// maybe this is correct, still isn't returning value
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int prod = 1;
    while (n != 0)
    {
        int digit = n % 10;
        sum = sum + digit;
        prod = prod * digit;
        n = n / 10;
    }
    int answer = prod - sum;
    return answer;
}
