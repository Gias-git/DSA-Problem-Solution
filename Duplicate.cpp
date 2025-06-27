#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bool duplicate = false;
    sort(v.begin(), v.end());

    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            duplicate = true;
            break;
        }
    }

    if (duplicate)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}