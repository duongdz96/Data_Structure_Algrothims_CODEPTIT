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
int n, ok;
string s;
vector<string> res;
int a[1000][1000];
bool check;
void Try(int i, int j, string s)
{
    if (i == 1 && j == 1 && a[i][j] == 0)
    {
        check = false;
        return;
    }
    if (i == n && j == n && a[n][n])
    {
        res.push_back(s);
        check = true;
        return;
    }
    if (i < n && a[i + 1][j])
        Try(i + 1, j, s + "D");
    if (j < n && a[i][j + 1])
        Try(i, j + 1, s + "R");
    if ((i < n && j < n && !a[i + 1][j] && a[i][j + 1]) || i > n || j > n)
    {
        return;
    }
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    check = false;
    res.clear();
    Try(1, 1, "");
    if (!check)
    {
        cout << "-1";
    }
    else
    {
        sort(res.begin(), res.end());
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
    }
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
