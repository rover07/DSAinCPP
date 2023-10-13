// intended to understand concept of break
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    bool isPrime = 1;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            cout << n << " number is not prime " << endl;
            isPrime = 0;
            break; // as agar 1 bhi its not prime, we dont want to know rest of numbers
        }
    }
    if (isPrime == 0)
    {
        cout << "Not a prime number";
    }
    else
    {
        cout << "is a prime number";
    }
}