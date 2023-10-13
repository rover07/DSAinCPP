#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    char op;
    cout << "enter operation";
    cin >> op;

    switch (op)
    {

    case '+':
        cout << a + b;
        break;
    case '*':
        cout << a * b;
        break;
    case '-':
        cout << a - b;
        break;

    default:
        cout << "Invalid entry";
    }
}