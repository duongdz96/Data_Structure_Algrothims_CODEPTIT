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
int n, k, a[1000], ok;
void ktao()
{
    for (int i = 1; i <= n; i++)
        a[i] = 0;
}
void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
        /* code */
    }
    if (i == 0)
        ok = 0;
    else
        a[i] = 1;
}
bool check()
{
    int cnt = 0, res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        if (cnt > k)
            return false;
        if (cnt == k)
            res++;
    }
    return res == 1;
}
void solve()
{
    int dem = 0;
    cin >> n >> k;
    ok = 1;
    ktao();
    while (ok)
    {
        if (check())
        {
            dem++;
        }
        sinh();
    }
    cout << dem << endl;
    ok = 1;
    ktao();
    while (ok)
    {
        if (check())
        {
            for (int i = 1; i <= n; i++)
            {
                if (a[i])
                    cout << "B";
                else
                    cout << "A";
            }
            cout << endl;
        }
        sinh();
        /* code */
    }
}
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    //     cout << endl;
    // }
}