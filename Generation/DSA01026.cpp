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
int n, a[100], ok;
string s;
void ktao()
{
    s = string(n, '6');
}
void sinh()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '8')
    {
        s[i] = '6';
        i--;
        /* code */
    }
    if (i == -1)
        ok = 0;
    else
        s[i] = '8';
}
bool check()
{
    if (s[0] == '6' || s[n - 1] == '8')
        return false;
    if (s.find("88") != string::npos)
        return false;
    if (s.find("6666") != string::npos)
        return false;
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
            cout << s << endl;
        }
        sinh();
        /* code */
    }
}
int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
