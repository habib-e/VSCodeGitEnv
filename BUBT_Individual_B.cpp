/***
**      Bismillahir Rahmanir Rahim
**              ALLAHU AKBAR
**
**     Author: Habib (imhabib)
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double dl;
typedef unsigned long long ull;
#define pb push_back
#define PB pop_back
#define nn "\n"
#define O_O                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(p) p.begin(), p.end()
#define zz(v) (ll) v.size()
#define ss ' '
#define sz(x) (ll) x.size()
#define ppb pop_back
#define MEM(a, b) memset(a, (b), sizeof(a))
#define CLR(p) memset(p, 0, sizeof(p))
#define precision(a) fixed << setprecision(a)
#define for0(i, b) for (ll i = 0; i < (b); i++)
#define for1(i, b) for (int i = 1; i <= (b); i++)
#define arrsize(a) (sizeof(a) / sizeof(a[0]))
#define S(a) scanf("%lld", &a)
#define dbug(vari) cerr << #vari << = << (vari) << endl
#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define toggleBit(S, j) (S ^= (1 << j))
#define lowBit(S) (S & (-S))
#define setAll(S, n) (S = (1 << n) - 1)
#define SS(a, b) scanf("%lld %lld", &a, &b)
#define SSS(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi acos(-1.0)
#define ff first
#define sc second
#define print(v)   \
    for (ll i : v) \
    cout << i << ss
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pair<ll, ll>> vpll;
typedef vector<ll> vll;
typedef map<string, ll> msl;
typedef map<ll, ll> mll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif
ll secondmax(ll a, ll b, ll c)
{
    ll ar[3];
    ar[0] = a, ar[1] = b, ar[2] = c;
    sort(ar, ar + 3);
    return ar[1];
}
#define MOD 1000000007
void debug1(string s)
{
    cout << s << nn;
}
void debug1(char s) { cout << s << nn; }
void debug1(ll s) { cout << s << nn; }
void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(dl t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << " ";
    _print(p.sc);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
ll pow1(ll base, ll x)
{
    ll ans = 1;
    for (ll i = 1; i <= x; i++)
        ans *= base;
    return ans;
}
#define MAX 1000000
#define m 1000003
ll ar[MAX];
ll fact[MAX];
ll binpow(ll a, ll b)
{
    a %= m;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
// void allfactor(ll n)
// {
//     ll i = 1;
//     while (i * i <= n)
//     {
//         if (n % i == 0)
//         {
//             if (n / i == i)
//                 ar[i]++;
//             else
//             {
//                 ar[i]++;
//                 ar[n / i]++;
//             }
//         }
//         i++;
//     }
// }
// ll nCr(ll a, ll b)
// {
//     ll ans = 1;
//     for (ll i = 1; i <= b; i++)
//     {
//         ans *= (a - i + 1);
//         ans /= i;
//     }
//     return ans;
// }
// int bin_power(int a, int n)
// {
//     int ans = 1;
//     for (int i = 0; i < 30; i++)
//     {
//         if ((n >> i) & 1)
//         {
//             ans = 1LL * ans * a % p;
//         }
//         a = 1LL * a * a % p;
//     }
//     return ans;
// }
// int nCr(int n, int r)
// {
//     int ans = 1;
//     for (int i = 1; i <= r; i++)
//     {
//         ans = 1LL * ans * (n - i + 1) % p;
//         ans = 1LL * ans * bin_power(i, p - 2) % p;
//     }
//     return ans;
// }
// void precompute()
// {
//     for (ll i = 0; i < MAX; i++)
//         for (ll j = 0; j <= i; j++)
//             ar[i] = (ar[i] + nCrModp(i, j)) % p;
// }
// void precompute(ll n)
// {
//     ar[0] = 1;
//     for (ll i = 1; i <= n; i++)
//         ar[i] = ar[i - 1] * i % p;
// }
// ll nck(ll n, ll k)
// {
//     if (k > n)
//         return 0;
//     if (k == 0 || k == n)
//         return 1;
//     return nck(n - 1, k - 1) + nck(n - 1, k);
// }
int32_t main()
{
    O_O;
    fact[0] = 1;
    for (ll i = 1; i <= MAX; i++)
        fact[i] = (fact[i - 1] * i) % m;
    ll t;
    cin >> t;

    // precompute();
    // allfactor(1000005);
    for (ll i = 1; i <= t; i++)
    {
        ll n, k;
        cin >> n >> k;
        // ll ans = nCr(n, k);
        ll ans = (fact[n - k] * fact[k]) % m;
        ans = binpow(ans, m - 2);
        ans = (fact[n] * ans) % m;

        // ll ans = nCr(n, k);
        cout << "Case " << i << ": " << ans << nn;
    }
    return 0;
}
