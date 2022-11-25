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
int n, x;
void solve()
{
    cin >> n >> x;
    vi a(n);
    bool check = false;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int idx = 0, max_val = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max_val && a[i] <= x)
        {
            max_val = a[i];
            idx = i;
            check = true;
        }
    }
    if (check == false)
        cout << "-1";
    else
        cout << idx + 1;
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