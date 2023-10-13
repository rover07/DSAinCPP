#include<iostream>
using namespace std;
int main()
{
    int n = 10; // We want 10th no of fibonacci series
    int a = 0;  // 1st number
    int b = 1;  // 2nd number
    cout << a << " ";
    for (int i = 1; i <= n; i++)
    {
        int nextNum = a + b;
        cout << nextNum << "  ";
        a = b;
        b = nextNum;
    }
}