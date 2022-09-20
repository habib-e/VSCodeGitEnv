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
// // make binary string a equal to b by deleting some bits from a
// bool make_equal(string a, string b)
// {
//     int i = 0;
//     int j = 0;
//     while (i < sz(a) && j < sz(b))
//     {
//         if (a == b)
//             break;
//         if (a[i] != b[j])
//         {
//             a.erase(i, 1);
//             i--;
//         }
//         j++;
//         i++;
//     }
//     if (a == b)
//         return true;
//     return false;
// }
// int solve(string w1, string w2, int i, int j)
// {
//     if (i == size(w1) && j == size(w2))
//         return 0; // reached end of both strings -> both strings have been equalized and no further steps required
//     if (i == size(w1))
//         return size(w2) - j; // reached end of word1 -> need to delete remaining characters of word2 to equalize
//     if (j == size(w2))
//         return size(w1) - i; // reached end of word2 -> need to delete remaining characters of word1 to equalize
//     if (w1[i] == w2[j])
//         return solve(w1, w2, i + 1, j + 1); // no deletion required since the characters already match
//     // 1 current character deletion + min(after deleting w1[i], after deleting w2[j])
//     return 1 + min(solve(w1, w2, i + 1, j), solve(w1, w2, i, j));
// }
int32_t main()
{
    O_O;
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        ll n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        // if (make_equal(a, b))
        // {
        //     cout << "YES\n";
        // }
        // else
        // {
        //     cout << "NO\n";
        // }
        ll sa = sz(a);
        ll sb = sz(b);
        ll cnt = 0;
        int k = 0, in = 0;
        bool flag = false;
        bool flag1 = false;
        for (int i = 0; i < sa - sb; i++)
        {
            if (a[i] == b[k])
            {
                k++;
                in = i;
                flag = true;
                break;
            }
        }
        if (flag)
        {
            int tmp = (sa - (sb - 1));
            int tmpk = sb - 1;
            for (int i = sa - 1; i >= sa - sb; i--)
            {
                if (a[i] == b[tmpk])
                {
                    tmpk--;
                }
                else
                {
                    flag1 = false;
                }
            }
        }
        if (flag1 and flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }

        // if (sb == 2)
        // {
        //     for (int i = 0; i < sa; i++)
        //     {
        //         if (a[i] == b[k])
        //         {
        //             k++;
        //         }
        //         if (a == b)
        //         {
        //             flag = true;
        //             break;
        //         }
        //     }
        // }
        // else
        // {
        //     for (int i = 0; i < sa; i++)
        //     {
        //         if (a[i] == b[k] and k == 0)
        //         {
        //             k++;
        //         }
        //         if (k)
        //         {
        //             string ta = "", tb = "";
        //             ta += b[k - 1];
        //             tb += a[i];
        //             int ti = i + 1;
        //             int tk = k;
        //             while (1)
        //             {
        //                 if (a[ti] == b[tk])
        //                 {
        //                     ta += a[ti];
        //                     tb += b[tk];
        //                     ti++;
        //                     tk++;
        //                 }
        //                 else
        //                     break;
        //             }
        //             if (ta == tb)
        //             {
        //                 flag = true;
        //                 break;
        //             }
        //         }
        //     }
        // }

        // debug(sb);
        // debug(k);
        // if (flag)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }
    return 0;
}
