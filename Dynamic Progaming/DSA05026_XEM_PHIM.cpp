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

int main(int argc, char const *argv[])
{
    int c, n;
    cin >> c >> n;
    vi a(n);
    FOR(i, 0, n)
    cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    int sum = 0, max_val = INT_MIN;
    for (int i = 0; i <= n; i++)
    {
        sum += a[i];
        if (sum >= c)
        {
            sum -= a[i];
            break;
        }
    }
    cout << sum << endl;
    return 0;
}
