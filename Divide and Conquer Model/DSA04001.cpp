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

const long long MOD = (int)1e9 + 7;
const int INF = (int)1e9 + 1;
int n, k;
ll Mul(ll a, ll b)
{
    if (b == 0)
        return 0;
    ll tmp = Mul(a, b / 2);
    if (b & 1)
        return (tmp * 2 + a) % MOD;
    return tmp * 2 % MOD;
}
ll Powmod(int n, int k)
{
    if (k == 0)
        return 1;
    if (k == 1)
        return n % MOD;
    ll tmp = Powmod(n, k / 2);
    ll a = Mul(tmp, tmp);
    if (k & 1)
        return a * n % MOD;
    return a % MOD;
}
void solve()
{
    cin >> n >> k;
    cout << Powmod(n, k);
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