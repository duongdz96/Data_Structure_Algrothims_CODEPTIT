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
int n, ok, res;
string s;
void solve()
{
    cin >> n;
    int d4 = 0, d7 = 0;
    int res4 = 1e5, res7 = 1e5;
    for (int i = n; i >= 0; i--)
    {
        if (n >= 4 * i && ((n - 4 * i) % 7 == 0))
        {
            d4 = i;
            d7 = (n - 4 * i) / 7;

            if (d4 + d7 < res4 + res7)
            {
                res4 = d4;
                res7 = d7;
            }
            else if (d4 + d7 == res4 + res7)
            {
                if (res4 > d4)
                {
                    res4 = d4;
                    res7 = d7;
                }
            }
        }
    }
    if (4 * res4 + 7 * res7 == n)
    {
        for (int i = 0; i < res4; i++)
        {
            cout << "4";
        }
        for (int i = 0; i < res7; i++)
        {
            cout << "7";
        }
    }
    else
        cout << "-1";
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