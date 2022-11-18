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
ll n, ok; // luu ket qua
string s;
void solve()
{
    cin >> n;
    int a[n];
    FOR(i, 0, n)
    cin >> a[i];
    ll cnt[1005];
    ll res = 0;
    memset(cnt, 0, sizeof(cnt)); //
    FOR(i, 0, n)
    {
        cnt[i] = a[i];
        FOR(j, 0, i)
        {
            if (a[i] > a[j])
                cnt[i] = max(cnt[i], cnt[j] + a[i]);
        }
        res = max(res, cnt[i]);
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
