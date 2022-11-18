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
int n, ok, res;
string s;
bool cmp(pi a, pi b)
{
    return a.se < b.se;
}
void solve()
{
    cin >> n;
    vii v(n);
    FOR(i, 0, n)
    {
        cin >> v[i].fi;
        cin >> v[i].se;
    }
    sort(v.begin(), v.end(), cmp);

    int cnt = 0, cur = 0;
    for (auto x : v)
    {
        if (x.fi >= cur)
        {
            cnt++;
            cur = x.se;
        }
    }
    cout << cnt;
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