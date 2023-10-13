#include <iostream>
using namespace std;

void printArray()
{
}

int main()
{
    // declare array
    int number[10];

    // accessing an array
    cout << "Value at 0th index is" << number[0] << endl;

    // cout << "Value at 0th index is" << number[20] << endl;
    int second[3] = {2, 3, 5};
    cout << "Second array " << second[2] << endl;

    int n = 3;
    cout << "Printing the array";
    for (int i = 0; i <= n; i++)
    {
        cout << second[i];
    }

    // Third type: init all values with 0
    int third[] = {0};
    cout << "Printing the array";
    for (int i = 0; i <= n; i++)
    {
        cout << third[i];
    }

    // init all locations with 1(not possible this way)
    int fourth[] = {1};
    cout << "Printing the array";
    for (int i = 0; i <= n; i++)
    {
        cout << fourth[i];
    }

    return 0;
}