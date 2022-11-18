#include <bits/stdc++.h>
using namespace std;

#define ms(s, n) memset(s, n, sizeof(s))
#define all(a) a.begin(), a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a)-1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int)1e9 + 7;
const int INF = (int)1e9 + 1;
ll n, res, m, k;
string s;

void solve()
{
    cin >> n >> m >> k;
    ll a[n], b[m], c[k];
    int ok = 0;
    set<ll> se1, se2, se3;
    for (auto &x : a)
    {
        cin >> x;
        // se1.insert(x);
    }
    for (auto &x : b)
    {
        cin >> x;
        // se2.insert(x);
    }
    for (auto &x : c)
    {
        cin >> x;
        // se3.insert(x);
    }
    // vector<ll> giao;
    // for (auto x : se1)
    // {
    //     if (se2.find(x) != se2.end() && se3.find(x) != se3.end())
    //     {
    //         ok = 1;
    //         giao.push_back(x);
    //     }
    // }
    // if (ok)
    // {
    //     for (auto x : giao)
    //     {
    //         cout << x << " ";
    //     }
    // }
    // else
    // {
    //     cout << "-1";
    // }
    int i = 0, j = 0, l = 0;
    while (i < n && j < m && l < k)
    {
        if (a[i] == b[j] && b[j] == c[l])
        {
            cout << a[i] << " ";
            ok++;
            i++;
            j++;
            l++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < c[l])
        {
            j++;
        }
        else
        {
            l++;
        }
    }
    if (ok == 0)
        cout << "NO";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}