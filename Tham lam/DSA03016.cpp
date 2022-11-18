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
int d, ok, res, sum;
string s;
void solve()
{
    cin >> sum >> d;
    if (d == 1 && sum == 0)
        cout << 0;
    stack<int> st;
    if (sum == 0 || d * 9 < sum)
        cout << "-1";
    else
    {
        sum--;
        while (d--)
        {
            if (sum >= 9)
            {
                st.push(9);
                sum -= 9;
            }
            else if (sum > 0)
            {
                st.push(sum);
                sum = 0;
            }
            else
                st.push(0);
        }
        cout << st.top() + 1;
        st.pop();
        while (!st.empty())
        {
            cout << st.top();
            st.pop();
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