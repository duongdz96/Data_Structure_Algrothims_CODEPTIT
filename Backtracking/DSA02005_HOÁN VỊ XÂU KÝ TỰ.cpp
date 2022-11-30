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
int a[100];
string s;
bool check[100];
void Try(int i)
{
    for (int j = 0; j < s.size(); j++)
    {
        if (check[j])
        {
            a[i] = j;
            check[j] = false;
            if (i == s.size())
            {
                for (int l = 1; l <= s.size(); l++)
                {
                    cout << s[a[l]];
                }
                cout << " ";
            }
            else
                Try(i + 1);
            check[j] = true;
        }
    }
}
void solve()
{
    cin >> s;
    memset(check, true, sizeof(check));
    sort(s.begin(), s.end());
    Try(1);
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
