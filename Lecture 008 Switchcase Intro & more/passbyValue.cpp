#include <iostream>
using namespace std;

int dummy(int n)
{
    n++;
    cout << "Copy value is:" << n;
}
int main()
{
    int n = 15;
    dummy(n);
    cout << "Original value is:" << n;
    return 0;
}