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
string s;
int ok, res, n;
string solve1(int n)
{
    queue<string> q;
    q.push("1");
    while (!q.empty())
    {
        string res = q.front();
        q.pop();
        ll tmp = 0;
        for (int i = 0; i < res.size(); i++)
        {
            tmp = 10 * tmp + (int)(res[i] - '0');
            tmp %= n;
        }
        if (tmp == 0)
            return res;
        q.push(res + "0");
        q.push(res + "1");
    }
}
void solve()
{
    cin >> n;
    cout << solve1(n);
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