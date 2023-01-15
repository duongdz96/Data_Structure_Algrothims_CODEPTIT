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

int main(int argc, char const *argv[])
{
    int x;
    cin >> x;
    while (x--)
    {
        int t;
        cin >> t;
        deque<int> q;
        while (t--)
        {
            int type;
            cin >> type;
            if (type == 1)
            {

                cout << q.size() << endl;
            }
            else if (type == 2)
            {
                if (q.empty())
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else if (type == 3)
            {
                int n;
                cin >> n;
                q.push_back(n);
            }
            else if (type == 4)
            {
                if (!q.empty())
                    q.pop_front();
            }
            else if (type == 5)
            {
                if (!q.empty())
                    cout << q.front() << endl;
                else
                    cout << "-1" << endl;
            }
            else if (type == 6)
            {
                if (!q.empty())
                    cout << q.back() << endl;
                else
                    cout << "-1" << endl;
            }
        }
    }
}
