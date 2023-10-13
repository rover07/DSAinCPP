#include <iostream>
using namespace std;
int main()
{

    int amount;
    cout << "Enter money" << endl;
    cin >> amount;
    int rs100, rs50, rs20, rs1;

    switch (1)
    {
    case 1:
        rs100 = amount / 100;
        amount = amount % 100;
        cout << "The number 100rupees notes required are" << rs100;

    case 2:
        rs50 = amount / 50;
        amount = amount % 50;
        cout << "The number 50 rupees notes required are" << rs50;
    case 3:
        rs20 = amount / 20;
        amount = amount % 20;
        cout << "The number 20 rupees notes required are" << rs20;
    case 4:
        rs1 = amount / 1;
        amount = amount % 1;
        cout << "The number 1 rupees notes required are" << rs1;
    }
    return 0;
}