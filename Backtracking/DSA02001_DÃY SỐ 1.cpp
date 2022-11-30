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
string s;
void solve()
{
    cin >> n;
    int a[n + 5][n + 5];
    for (int j = 1; j <= n; j++)
        cin >> a[1][j];
    int col = n - 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            a[i][j] = a[i - 1][j] + a[i - 1][j + 1];
        }
        col--;
    }
    col = n;
    for (int i = 1; i <= n; i++)
    {
        cout << '[';
        for (int j = 1; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << a[i][col] << ']';
        col--;
        cout << endl;
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
