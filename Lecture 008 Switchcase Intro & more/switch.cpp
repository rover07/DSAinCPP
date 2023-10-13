#include <iostream>
using namespace std;
int main()
{
    /* int num = 1;
    switch (num)
    {

    case 1:
        cout << "one";
        break;
    case 2:
        cout << "two";
        break;
    default:
        cout << "default case";
    }
 */

    // Infinite loop fixed using exit()
    int ok = 1;
    while (ok)
    {
        switch (ok)
        {

        case 1:
            cout << "one";
            break;

        case 2:
            cout << "two";
            break;
        default:
            cout << "default case";
        }
        exit(0);
    }
    return 0;
}