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
string s;
void solve()
{
    cin >> s;
    string tmp = "";
    tmp += s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            if (tmp[i - 1] == '1')
                tmp += '0';
            else
                tmp += '1';
        }
        else
        {
            tmp += tmp[i - 1];
        }
    }
    cout << tmp;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}