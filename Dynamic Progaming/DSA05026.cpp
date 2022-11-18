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
int n, ok, res, m;
int dp[105][25005];
string s;
void solve()
{
    cin >> m >> n;
    int a[n];
    FO(i, 1, n)
    cin >> a[i];
    memset(dp, 0, sizeof(dp));
    FO(i, 1, m)
    {
        dp[0][i] = 0;
    }
    FO(i, 1, n)
    {
        FO(j, 1, m)
        {
            dp[i][j] = dp[i - 1][j];
            if (a[i] <= j)
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i]] + a[i]);
            }
        }
    }
    cout << dp[n][m];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}