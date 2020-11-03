#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
void reverseVector(vector<int>& v)
{
    for(int i=0;i<v.size()/2;i++)
    {
        swap(v[i],v[v.size()-1-i]);
    }
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
}
int main()
{
    OJ;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        reverseVector(v);
    }
    return 0;
}