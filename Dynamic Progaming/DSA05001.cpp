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
int n, ok, res;
string s1, s2;
int F[1001][1001];
void solve()
{
    cin >> s1 >> s2;
    memset(F, 0, sizeof(F));
    int res = 0;
    FO(i, 1, s1.size())
    {
        FO(j, 1, s2.size())
        {
            if (s1[i - 1] == s2[j - 1])
                F[i][j] = F[i - 1][j - 1] + 1;
            else
                F[i][j] = max(F[i - 1][j], F[i][j - 1]);
            res = max(res, F[i][j]);
        }
    }
    cout << res;
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