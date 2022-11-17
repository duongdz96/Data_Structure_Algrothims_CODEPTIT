#include <bits/stdc++.h>
using namespace std;
#define fi first;
#define se second;
typedef long long ll;
typedef double db;
typedef float fl;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
string s[10000];
int n;
void solve()
{
    cin >> n;
    int m = pow(2, n);
    s[1] = "0";
    s[2] = "1";
    if (n > 1)
    {
        int pos = 2;
        for (int i = 2; i <= n; i++)
        {
            int k = pow(2, i);
            for (int j = 1; j <= pos; j++)
            {
                s[k - j + 1] = "1" + s[j];
                s[j] = "0" + s[j];
            }
            pos = k;
        }
    }
    for (int j = 1; j <= m; j++)
        cout << s[j] << " ";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}