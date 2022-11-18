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
int n, s, m;
void solve()
{
    cin >> n >> s >> m;
    if (n * (s - s / 7) < s * m)
        cout << "-1";
    else
    {
        for (int i = 1; i <= s - s / 7; i++)
        {
            if (n * i >= s * m)
            {
                cout << i;
                break;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}