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
bool h[11], c[11], nguoc[22], xuoi[22];
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!c[j] && !nguoc[j + i - 1] && !xuoi[i - j + n])
        {
            c[j] = nguoc[j + i - 1] = xuoi[i - j + n] = true;
            if (i == n)
                res++;
            else
                Try(i + 1);
            h[j] = c[j] = nguoc[j + i - 1] = xuoi[i - j + n] = false;
        }
    }
}
void solve()
{
    cin >> n;
    res = 0;
    Try(1);
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
