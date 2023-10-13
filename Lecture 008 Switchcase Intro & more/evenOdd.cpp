#include <iostream>
using namespace std;

// 1->even
// 0->odd
bool isEven(int a)
// odd
{
    if (a & 1)
    {
        return 0;
    }
    else
    { // even
        return 1;
    }
}

int main()
{
 
    int num;
    cin >> num;

    if (isEven(num)) // andar 1 aya means successful and 0 aya means unsuccessful or not satisfied so skips to else block
    {
        cout << "Number is even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }
    return 0;
}