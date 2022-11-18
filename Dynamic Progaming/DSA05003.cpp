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
int n, ok, res, m, l;
string s1, s2, s3;
// int F[1001][1001][1001];
void solve()
{
    cin >> n >> m >> l;
    cin >> s1 >> s2 >> s3;
    int F[n + 1][m + 1][l + 1];
    memset(F, 0, sizeof(F));
    int res = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            for (int k = 1; k <= l; k++)
            {
                if (s1[i - 1] == s2[j - 1] && s1[i - 1] == s3[k - 1])
                {
                    F[i][j][k] = F[i - 1][j - 1][k - 1] + 1;
                }
                else
                {
                    F[i][j][k] = max(F[i - 1][j][k], max(F[i][j - 1][k], F[i][j][k - 1]));
                }
            }
        }
    }
    cout << F[n][m][l];
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