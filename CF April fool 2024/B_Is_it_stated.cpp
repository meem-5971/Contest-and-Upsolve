#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;
        bool flag = false;
        for (int i = 0; i < st.length(); i++)
        {
            if (st[i] == 'i' && st[i + 1] == 't')
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}