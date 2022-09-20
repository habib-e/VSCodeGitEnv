#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        int n, m, sx, sy, d;
        cin >> n >> m >> sx >> sy >> d;
        int tx = sx + d, ty = sy + d;
        if (tx > 1 or ty < m)
        {
            cout << (n - 1) + (m - 1) << endl;
        }
        else if (tx < n or ty > 1)
        {
            cout << (n - 1) + (m - 1) << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}
