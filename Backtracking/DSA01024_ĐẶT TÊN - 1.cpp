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
int n, ok, k;
int a[35];
vector<string> v, res;
void print()
{
    for (int i = 1; i <= k; i++)
        cout << v[a[i] - 1] << " ";
    cout << endl;
}
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= v.size() - k + i; j++)
    {
        a[i] = j;
        if (i == k)
            print();
        else
            Try(i + 1);
    }
}
void solve()
{
    cin >> n >> k;
    string s;
    map<string, bool> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        mp[s] = 1;
    }
    for (auto x : mp)
    {
        v.push_back(x.first);
    }
    Try(1);
}
int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
