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
ll n, ok, res;
string s;
void solve()
{
    cin >> n;
    int a[n];
    vi v;
    while (n)
    {
        v.push_back(n % 10);
        n /= 10;
    }
    reverse(v.begin(), v.end());
    ll pos;
    FOR(i, 0, v.size())
    {
        if (v[i] >= 2)
        {
            pos = i;
            break;
        }
    }
    FOR(i, pos, v.size())
    {
        v[i] = 1;
    }
    ll res = 0, s = 1;
    FORd(i, v.size(), 0)
    {
        res += v[i] * s;
        s *= 2;
    }
    cout << res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}