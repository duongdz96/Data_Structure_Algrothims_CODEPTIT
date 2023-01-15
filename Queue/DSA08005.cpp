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
int n;
ll b[100001] = {0};
ll np(int n)
{
    vi v;
    while (n)
    {
        v.push_back(n % 2);
        n /= 2;
    }
    ll res = 0;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        res = 10 * res + v[i];
    }
    return res;
}
void Pre(int n)
{
    b[0] = 0;
    b[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        b[i] = np(i);
    }
}
void solve()
{

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << b[i] << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    Pre(10000);
    while (t--)
    {
        solve();
        cout << endl;
    }
}