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
int n, k, a[15], b[15], ok;
void ktao()
{
    for (int i = 1; i <= k; i++)
        b[i] = i;
}
void sinh()
{
    int i = k;
    while (i >= 1 && b[i] == n - k + i)
    {
        i--;
        /* code */
    }
    if (i == 0)
        ok = 0;
    else
    {
        b[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            b[j] = b[j - 1] + 1;
        }
    }
}
bool cmp()
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}
void solve()
{
    cin >> n >> k;
    int cnt = 0;
    for (int i = 1; i <= k; i++)
        cin >> a[i];
    ktao();
    ok = 1;
    while (ok)
    {
        cnt++;
        if (cmp())
        {
            cout << cnt;
            break;
        }
        sinh();
        /* code */
    }
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
