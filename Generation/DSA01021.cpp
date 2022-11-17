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
int n, k, a[1000], b[1000];
void cmp(int *a, int *b)
{
    int cnt = 0;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (a[i] == b[j])
                cnt++;
        }
    }
    cout << k - cnt;
}
void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
        /* code */
    }
    if (i == 0)
    {
        cout << k;
    }
    else
    {
        copy(begin(a), end(a), begin(b));
        b[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            b[j] = b[j - 1] + 1;
        }
        cmp(a, b);
    }
}
void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
        cin >> a[i];
    sinh();
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
