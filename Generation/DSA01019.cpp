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
// 0: A, 1:H
int n, a[1000], ok;
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
    if (a[1] == 0 || a[n] == 1)
        return false;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1 && a[i + 1] == 1)
            return false;
    }
    return true;
}
void solve()
{
    cin >> n;
    ktao();
    ok = 1;
    while (ok)
    {
        if (check())
        {
            for (int i = 1; i <= n; i++)
            {
                if (a[i] == 0)
                    cout << "A";
                else
                    cout << "H";
            }
            cout << endl;
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
        // cout << endl;
    }
    return 0;
}
