#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;
    for (auto x : v)
    {
        if (x == 0)
            c0++;
        else if (x == 1)
            c1++;
        else
            c2++;
    }
    v.clear();
    for (int i = 0; i < c0; i++)
        v.push_back(0);
    for (int i = 0; i < c1; i++)
        v.push_back(1);
    for (int i = 0; i < c2; i++)
        v.push_back(2);
    for (auto x : v)
        cout << x << " ";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}