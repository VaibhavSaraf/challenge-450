#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
void maxminElement(vector<int>& v)
{
    int mini = INT_MAX, maxi = INT_MIN;
    for(auto x : v)
    {
        if(x>maxi)
            maxi = x;
        if(x<mini)
            mini = x;
    }
    cout<<"Minimum : "<<mini<<"\n";
    cout<<"Maximum : "<<maxi<<"\n";
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
        maxminElement(v);
    }
    return 0;
}