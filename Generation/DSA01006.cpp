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
int n, a[1000];
void ktao()
{
    for (int i = 0; i < n; i++)
        a[i] = n - i;
}
void solve()
{
    cin >> n;
    ktao();
    do
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << " ";
        /* code */
    } while (prev_permutation(a, a + n));
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
