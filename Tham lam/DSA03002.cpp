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
string a, b;
void min_val(string a, string b)
{
    for (auto &x : a)
    {
        if (x == '6')
            x = '5';
    }
    for (auto &x : b)
    {
        if (x == '6')
            x = '5';
    }
    cout << stoll(a) + stoll(b) << " ";
}
void max_val(string a, string b)
{
    for (auto &x : a)
    {
        if (x == '5')
            x = '6';
    }
    for (auto &x : b)
    {
        if (x == '5')
            x = '6';
    }
    cout << stoll(a) + stoll(b);
}
void solve()
{
    cin >> a >> b;
    min_val(a, b);
    max_val(a, b);
}
int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
