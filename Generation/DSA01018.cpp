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
int n, k, a[1005], tmp;
void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
        cin >> a[i];
    while (a[tmp - 1] + 1 == a[tmp] && tmp)
    {
        tmp--;
        /* code */
    }
    if (tmp)
    {
        a[tmp]--;
        for (int i = tmp + 1; i <= k; i++)
            a[i] = n - k + i;
        for (int i = 1; i <= k; i++)
            cout << a[i] << " ";
    }
    else

        for (int i = n - k + 1; i <= n; i++)
            cout << i << " ";
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