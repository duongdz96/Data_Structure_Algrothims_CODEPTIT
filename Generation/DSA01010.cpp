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
int n, k, a[100000];
set<int> se1;
void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
        /* code */
    }
    if (i == 0)
        cout << k;
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
        int cnt = 0;
        for (int i = 1; i <= k; i++)
        {
            if (se1.find(a[i]) == se1.end())
            {
                cnt++;
            }
        }
        cout << cnt;
    }
}
void solve()
{
    se1.clear();
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
        se1.insert(a[i]);
    }
    sinh();
    // se1.clear();
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