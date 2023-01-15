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
void solve()
{
    string s;
    deque<int> q;
    while (cin >> s)
    {
        if (s == "PUSHFRONT")
        {
            int x;
            cin >> x;
            q.push_front(x);
        }
        else if (s == "PRINTFRONT")
        {
            if (!q.empty())
                cout << q.front() << endl;
            else
                cout << "NONE\n";
        }
        else if (s == "POPFRONT")
        {
            if (q.size())
                q.pop_front();
        }
        else if (s == "PUSHBACK")
        {
            int n;
            cin >> n;
            q.push_back(n);
        }
        else if (s == "PRINTBACK")
        {
            if (!q.empty())
                cout << q.back() << endl;
            else
                cout << "NONE\n";
        }
        else if (s == "POPBACK")
        {
            if (q.size())
                q.pop_back();
        }
    }
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