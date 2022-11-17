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
int n, a[1000], b[1000];
void ktao()
{
    for (int i = 0; i < n; i++)
        b[i] = i + 1;
}
bool cmp()
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}
void solve()
{
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ktao();
    do
    {
        cnt++;
        if (cmp())
        {
            cout << cnt;
            break;
        }
        /* code */
    } while (next_permutation(b, b + n));
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
