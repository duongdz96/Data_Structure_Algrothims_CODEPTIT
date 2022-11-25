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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll f[93];
    f[1] = f[2] = 1;
    for (int i = 3; i <= 92; i++)
        f[i] = f[i - 1] + f[i - 2];
    string s = "AAB";
    ll n, k;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        while (n > 2)
        {
            if (k <= f[n - 2])
                n -= 2;
            else
            {
                k -= f[n - 2];
                n--;
            }
        }
        cout << s[n];
        cout << endl;
    }
}