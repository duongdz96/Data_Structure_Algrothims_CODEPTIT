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
int n, ok, res;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == '0')
        {
            cout << "0" << endl;
            continue;
        }
        int l = s.size();
        int dp[l + 1];
        // dp[i] la so cach ma hoa den ki tu i
        dp[0] = 1;
        dp[1] = 1;
        FO(i, 2, l)
        {
            dp[i] = 0;
            if (s[i - 1] > '0')
                dp[i] = dp[i - 1];
            if (s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] < '7'))
            {
                dp[i] += dp[i - 2];
            }
        }
        cout << dp[l] << endl;
    }
}