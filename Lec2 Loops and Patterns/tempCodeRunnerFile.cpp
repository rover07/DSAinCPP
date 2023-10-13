    // Pattern4:reverse of pattern 5

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
    