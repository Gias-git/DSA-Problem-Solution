#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    int i = 0;

    while (i < t)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> sorted_v = v;
        sort(v.begin(), v.end());


        if (v == sorted_v)

        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        i++;
    }

    return 0;
}