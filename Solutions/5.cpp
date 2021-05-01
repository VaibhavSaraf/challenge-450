#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int s=0,t=0,e=n-1;
    while(s<e)
    {
        if(v[t]<0)
        {
            swap(v[s],v[t]);
            s++;
            t++;
        }
        else
        {
            swap(v[t],v[e]);
            e--;
        }
    }
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    OJ;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}