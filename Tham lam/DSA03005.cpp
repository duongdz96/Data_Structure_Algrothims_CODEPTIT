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
int n, k;
void solve()
{
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum1 = 0, sum2 = 0;
    sort(a, a + n);
    int x = min(k, n - k);
    for (int i = 0; i < x; i++)
    {
        sum1 += a[i];
    }
    for (int i = x; i < n; i++)
    {
        sum2 += a[i];
    }
    cout << abs(sum1 - sum2);
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