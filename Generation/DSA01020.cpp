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
string s, ok;
void pre()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '0')
    {
        s[i] = '1';
        i--;
        /* code */
    }
    if (i != -1)
    {
        s[i] = '0';
    }
    cout << s << endl;
}
void solve()
{
    cin >> s;
    pre();
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
