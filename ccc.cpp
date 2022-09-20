#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
// find the maximum subarray sum of length k
void solve()
{
    ll n, k;
    cin >> n >> k;
    for (ll i = 1, j = i + 1; i < n and j <= n; i++, j++)
    {
        cout << i % k << " " << j % k << nn;
        debug(i % k);
        debug(j % k);
    }
    ll ar[n], br[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
        // sum1 += ar[i];
    }
    sort(ar, ar + n);
    reverse(ar, ar + n);

    ll sum1 = 0;
    for (ll i = 0; i < k; i++)
    {

        sum1 += ar[i];
    }
    ll sum = 0;
    for (ll i = 0; i < k; i++)
    {
        sum += br[i];
    }
    ll ans = sum;
    for (ll i = k; i < n; i++)
    {
        if (ar[i] == 0)
            continue;
        sum += br[i];
        sum -= br[i - k];
        ans = max(ans, sum);
    }
    // cout << min(ans, sum1) << nn;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
