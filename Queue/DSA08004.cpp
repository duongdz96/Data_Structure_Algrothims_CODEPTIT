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
int n, ok, k;
string s;

void solve()
{
    cin >> k >> s;
    ll cnt[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        cnt[s[i] - 'A']++;
    }
    priority_queue<ll> q;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i])
        {
            q.push(cnt[i]);
        }
    }
    while (k--)
    {
        ll tmp = q.top();
        q.pop();
        tmp--;
        q.push(tmp);
    }
    ll result = 0;
    while (!q.empty())
    {
        ll res = q.top();
        result += res * res;
        q.pop();
    }
    cout << result;
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