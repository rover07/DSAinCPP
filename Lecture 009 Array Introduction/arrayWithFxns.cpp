// previous code was redundant, let's make it better using functions.

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << endl
         << "Question done" << endl;
}

int main()
{
    // declare array
    int first[10];

    // accessing an array
    int n = 3;
    printArray(first, 10);

    // cout << "Value at 0th index is" << number[20] << endl;
    int second[3] = {2, 3, 5};
    printArray(second, 3);

    // Third type: init all values with 0
    int third[10] = {0};
    printArray(third, 10);

    // init all locations with 1(not possible this way)
    int fourth[10] = {1};
    printArray(fourth, 10);
    return 0;
}