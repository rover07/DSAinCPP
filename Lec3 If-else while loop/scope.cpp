#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    if (true)
    {
        int a = 9;
        cout << a << endl;
    }
    cout << a;
}