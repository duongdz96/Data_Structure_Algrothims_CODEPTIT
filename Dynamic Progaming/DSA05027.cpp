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
int n, ok, res, V;
string s;
void solve()
{
    cin >> n >> V;
    vi a(n + 5), c(n + 5);
    FO(i, 1, n)
    cin >> a[i];
    FO(i, 1, n)
    cin >> c[i];
    int dp[n + 1][V + 1];
    FO(i, 0, n)
    {
        FO(j, 0, V)
        {
            dp[i][j] = 0;
        }
    }
    FO(i, 1, n)
    {
        FO(j, 1, V)
        {
            // khong lua chon do vat thu i vao trong tui
            dp[i][j] = dp[i - 1][j];

            if (j >= a[i]) // co the dua do vat thu i vao trong tui
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i]] + c[i]);
            }
        }
    }
    cout << dp[n][V];
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