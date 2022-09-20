#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
int32_t main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll mx = INT_MIN;
        ll mn = INT_MAX;
        ll mmm = 0, mnn = 0;
        for (ll j = 0; j < n; j++)
        {
            cin >> a[j];
            if (a[j] > mx)
            {
                mx = a[j];
                mmm = j;
            }
            if (a[j] < mn)
            {
                mn = a[j];
                mnn = j;
            }
        }
        if (n == 1)
        {
            cout << 0 << nn;
            continue;
        }
        if (n == 2)
        {
            cout << abs(a[0] - a[1]) << nn;
            continue;
        }
        if (a[0] == mn or a[n - 1] == mx)
        {
            cout << abs(mx - mn) << nn;
        }
        else
        {
            if (mmm == 0)
            {
                cout << mx - a[1] << nn;
            }
            else if (mmm == n - 1)
            {
                cout << mx - a[n - 1] << nn;
            }
            else
            {
                cout << mx - a[mmm + 1] << nn;
            }
        }
    }
    return 0;
}