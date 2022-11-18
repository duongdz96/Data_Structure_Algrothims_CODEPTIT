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
    cin >> s;
    // xau con doi xung la le
    int res = 1;
    for (int i = 0; i < s.size(); i++)
    {
        int u = i, v = i;
        while (u >= 0 && v < s.size())
        {
            if (s[u] == s[v])
            {
                res = max(res, v - u + 1);
                u--;
                v++;
            }
            else
            {
                break;
            }
        }
    }
    // xau con doi xung la chan
    for (int i = 0; i < s.size(); i++)
    {
        int u = i, v = i + 1;
        while (u >= 0 && v < s.size())
        {
            if (s[u] == s[v])
            {
                res = max(res, v - u + 1);
                u--;
                v++;
            }
            else
            {
                break;
            }
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