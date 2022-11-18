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
    int n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> q;
    int a[n];
    for (auto &x : a)
    {
        cin >> x;
        q.push(x);
    }

    ll sum = 0;
    while (q.size() != 1)
    {
        ll res1 = q.top();
        q.pop();
        ll res2 = q.top();
        q.pop();
        sum += res1 + res2;
        q.push(res1 + res2);
    }
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