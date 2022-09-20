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
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
void solve()
{
    ll x;
    cin >> x;

    string s;
    cin >> s;
    ll n = s.size();
    string ans = "";
    // for (ll i = 0; i < n; i++)
    // {

    //     if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0')
    //     {
    //         ans += 'j';
    //         i += 2;
    //         continue;
    //     }
    //     if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0')
    //     {
    //         ans += 'k';
    //         i += 2;
    //         continue;
    //     }
    //     if (s[i] == '1' && s[i + 1] == '2' && s[i + 2] == '0')
    //     {
    //         ans += 'l';
    //         i += 2;
    //         continue;
    //     }
    //     if (s[i] == '1' && s[i + 1] == '3' && s[i + 2] == '0')
    //     {
    //         ans += 'm';
    //         i += 2;
    //         continue;
    //     }
    //     if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '0')
    //     {
    //         ans += 'n';
    //         i += 2;
    //         continue;
    //     }
    //     if (s[i] == '1' && s[i + 1] == '5' && s[i + 2] == '0')
    //     {
    //         ans += 'o';
    //         i += 2;
    //         continue;
    //     }
    //     if (s[i] == '1' && s[i + 1] == '6' && s[i + 2] == '0')
    //     {
    //         ans += 'p';
    //         i += 2;
    //         continue;
    //     }
    //     if (s[i] == '1' && s[i + 1] == '7' && s[i + 2] == '0')
    //     {
    //         ans += 'q';
    //         i += 2;
    //         continue;
    //     }
    //     if (s[i] == '1' && s[i + 1] == '8' && s[i + 2] == '0')
    //     {
    //         ans += 'r';
    //         i += 2;
    //         continue;
    //     }
    //     if (s[i] == '1' && s[i + 1] == '9' && s[i + 2] == '0')
    //     {
    //         ans += 's';
    //         i += 2;
    //         continue;
    //     }
    //     if (s[i] == '2' && s[i + 1] == '0' && s[i + 2] == '0')
    //     {
    //         ans += 't';
    //         i += 2;
    //         continue;
    //     }
    //     if (s[i] == '2' && s[i + 1] == '1' && s[i + 2] == '0')
    //     {
    //         ans += 'u';
    //         i += 2;
    //         continue;
    //     }
    //     if (s[i] == '2' && s[i + 1] == '2' && s[i + 2] == '0')
    //     {
    //         ans += 'v';
    //         i += 2;
    //         continue;
    //     }
    //     if (s[i] == '2' && s[i + 1] == '3' && s[i + 2] == '0')
    //     {
    //         ans += 'w';
    //         i += 2;
    //         continue;
    //     }
    //     if (s[i] == '2' && s[i + 1] == '4' && s[i + 2] == '0')
    //     {
    //         ans += 'x';
    //         i += 2;
    //         continue;
    //     }
    //     if (s[i] == '2' && s[i + 1] == '5' && s[i + 2] == '0')
    //     {
    //         ans += 'y';
    //         i += 2;
    //         continue;
    //     }
    //     if (s[i] == '2' && s[i + 1] == '6' && s[i + 2] == '0')
    //     {
    //         ans += 'z';
    //         i += 2;
    //         continue;
    //     }
    stack<char> stac;
    for (int i = 0; i < n; i++)
    {
        stac.push(s[i]);
    }
    while (!stac.empty())
    {
        ll tmp1 = stac.top() - '0';
        stac.pop();
        if (tmp1 != 0)
            ans += (--tmp1) + 'a';
        else
        {
            ll tmp2 = stac.top() - '0';
            stac.pop();
            ll x = stac.top() - '0';
            stac.pop();
            ll y = x * 10 + tmp2;
            ans += ((--y) + 'a');
        }
    }
    //     if (s[i] == '1')
    //     {
    //         ans += 'a';
    //         continue;
    //     }
    //     if (s[i] == '2')
    //     {
    //         ans += 'b';
    //         continue;
    //     }
    //     if (s[i] == '3')
    //     {
    //         ans += 'c';
    //         continue;
    //     }
    //     if (s[i] == '4')
    //     {
    //         ans += 'd';
    //         continue;
    //     }
    //     if (s[i] == '5')
    //     {
    //         ans += 'e';
    //         continue;
    //     }
    //     if (s[i] == '6')
    //     {
    //         ans += 'f';
    //         continue;
    //     }
    //     if (s[i] == '7')
    //     {
    //         ans += 'g';
    //         continue;
    //     }
    //     if (s[i] == '8')
    //     {
    //         ans += 'h';
    //         continue;
    //     }
    //     if (s[i] == '9')
    //     {
    //         ans += 'i';
    //         continue;
    //     }
    // }
    // cout << ans << endl;
    //     ll x;
    //     cin >> x;
    //     string s;
    //     cin >> s;
    //     ll n = s.size();
    //     string ans = "";
    //     for (ll i = 0; i < n; i++)
    //     {
    //         if (s[i] == '0')
    //         {
    //             ans += 'j';
    //         }
    //         else
    //         {
    //             ll x = s[i] - '0';
    //             ll y = s[i + 1] - '0';
    //             ll z = x * 10 + y;
    //             ans += (z + 'a' - 1);
    //             i++;
    //         }
    //     }
    //     cout << ans << nn;
    // }
    reverse(ans.begin(), ans.end());
    cout << ans << nn;
}

int32_t main()
{
    O_O;
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}
