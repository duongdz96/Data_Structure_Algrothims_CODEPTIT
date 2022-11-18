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
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sum left and right
    int dpR[n + 5] = {0}, dpL[n + 5] = {0};
    for (int i = 0; i < n; i++)
    {
        dpL[i] = a[i];
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
                dpL[i] = max(dpL[i], dpL[j] + a[i]);
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        dpR[i] = a[i];
        for (int j = n - 1; j > i; j--)
        {
            if (a[i] > a[j])
                dpR[i] = max(dpR[i], dpR[j] + a[i]);
        }
    }
    int sum = -1;
    for (int i = 0; i < n; ++i)
        sum = max(sum, dpL[i] + dpR[i] - a[i]);
    cout << sum;
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