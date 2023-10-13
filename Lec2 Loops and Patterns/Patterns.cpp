/* Here i->row
        j->column */

#include <iostream>
using namespace std;
int main()
{
    /*      Pattern 1: Using while loop(not necessary but for practice)
        *****
        *****
        *****
        *****
        *****
       int i = 1, n;
       cin >> n;
       while (i <= n)
       {
           int j = 1;
           while (j <= n)
           {
               cout << "*";
               j++;
           }
           i++;
           cout << endl;
       } */
    /*
    //Pattern 2:
    // 11111
    // 22222
    // 33333
    // 44444
    // 55555

        int i = 1, n;
        cin >> n;
        while (i <= n)
        {
            int j = 1;
            while (j <= n)
            {
                cout << i;
                j++;
            }
            i++;
            cout << endl;
        } */

    /*   // Pattern 3:
      //  12345
      //  12345
      //  12345
      //  12345
      //  12345
      int i = 1, n;
      cin >> n;
      while (i <= n)
      {
          int j = 1;
          while (j <= n)
          {
              cout << j;
              j++;
          }
          i++;
          cout << endl;
      } */

    /*     // Pattern4:reverse of pattern 5

        int i = 1, n;
        cin >> n;
        while (i <= n)
        {
            int j = 1;
            while (j <= n)
            {
                cout << n - j + 1;
                j++;
            }
            cout << endl;
            i++;
        }
     */

    /*   // Pattern5:
      // 123
      // 456
      // 789
      int i = 1, n;
      int count = 1;
      cin >> n;
      while (i <= n)
      {
          int j = 1;
          while (j <= n)
          {
              cout << count << " ";
              count++;
              j++;
          }
          i++;
          cout << endl;
      }
   */

    /*     // Pattern6:
        // *
        // **
        // ***
        // ****
        int i = 1, n;
        cin >> n;
        while (i <= n)
        {
            int j = 1;
            while (j <= i)
            {
                cout << "*";
                j++;
            }
            i++;
            cout << endl;
        }
     */

    /*    // Pattern7:
       // 1
       // 22
       // 333
       // 4444
       // 55555
       int i = 1, n;
       cin >> n;
       while (i <= n)
       {
           int j = 1;
           while (j <= i)
           {
               cout << i;
               j++;
           }
           i++;
           cout << endl;
       } */

    /*     // Pattern8:
        // 1
        // 23
        // 456
        int i = 1, n;
        cin >> n;
        int count = 1;
        while (i <= n)
        {
            int j = 1;
            while (j <= i)
            {
                cout << count;
                j++;
                count++;
            }
            i++;
            cout << endl;
        } */

    // Pattern9:
    // 1
    // 23
    // 345
    // 567
    int i = 1, n;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        int value = i;
        while (j <= i)
        {
            cout << value;
            j++;
            value++;
        }
        i++;
        cout << endl;
    }

    // Pattern10:

    // Pattern11:

    // Pattern12:

    // Pattern13:

    // Pattern14:

    // Pattern15:

    // Pattern16:

    // Pattern17:

    // Pattern18:

    // Pattern19:

    // Pattern20:

    // Pattern21:

    // Pattern22:

    // Pattern23:

    // Pattern24:

    // Pattern25:

    // Pattern26:

    // Pattern27:
}
