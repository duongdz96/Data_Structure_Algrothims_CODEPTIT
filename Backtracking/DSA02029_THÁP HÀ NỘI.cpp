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
string s;
void Hanoi_Tower(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << a << " -> " << c << endl;
    }
    else
    {
        Hanoi_Tower(n - 1, a, c, b);
        Hanoi_Tower(1, a, b, c);
        Hanoi_Tower(n - 1, b, a, c);
    }
}
void solve()
{
    cin >> n;
    Hanoi_Tower(n, 'A', 'B', 'C');
}
int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
