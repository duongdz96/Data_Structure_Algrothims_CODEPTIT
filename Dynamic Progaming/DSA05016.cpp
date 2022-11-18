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
ll n, ok, res;
string s;
ll Urly(ll n)
{
    ll i2 = 1, i3 = 1, i5 = 1;
    ll urly[n + 5];
    urly[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        urly[i] = std ::min({urly[i2] * 2, urly[i3] * 3, urly[i5] * 5});
        if (urly[i] == urly[i2] * 2)
            i2++;
        if (urly[i] == urly[i5] * 5)
            i5++;
        if (urly[i] == urly[i3] * 3)
            i3++;
    }
    return urly[n];
}
void solve()
{
    cin >> n;
    cout << Urly(n);
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