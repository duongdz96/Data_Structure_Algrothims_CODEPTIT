#include <bits/stdc++.h>
using namespace std;

#define ms(s, n) memset(s, n, sizeof(s))
#define all(a) a.begin(), a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FO(i, a, b) for (int i = (a); i <= (b); ++i)
#define FORd(i, a, b) for (int i = (a)-1; i >= (b); --i)
#define FD(i, a, b) for (int i = (a); i >= (b); --i)
#define pb push_back
#define pf push_front
#define mp make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int)1e9 + 7;
const int INF = (int)1e9 + 1;
int n, m, k;
void solve()
{
    cin >> n >> m >> k;
    vi a(n), b(m);
    vi v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        v.push_back(b[i]);
    }
    sort(v.begin(), v.end());
    cout << v[k - 1];
    // for (auto x : v)
    // {
    //     cout << x << " ";
    // }
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
