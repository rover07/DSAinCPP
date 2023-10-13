#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 5; i++)
    {
        cout << "Hi";
        continue;
        cout << "this is blocked by continue";
    }
}