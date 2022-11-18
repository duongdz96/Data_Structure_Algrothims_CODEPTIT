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
int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        for (int i = 0; i < 10; i++)
        {
            cnt += n / a[i];
            n %= a[i];
        }
        cout << cnt << endl;
    }
}