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
int n;
string s;
void sinh(string s)
{
    int i = s.size() - 2;
    while (i >= 0 && s[i] >= s[i + 1])
    {
        i--;
        /* code */
    }
    if (i <= 0)
    {
        cout << "BIGGEST";
    }
    else
    {
        int j = s.size() - 1;
        while (s[i] >= s[j])
        {
            j--;
            /* code */
        }
        swap(s[i], s[j]);
        sort(s.begin() + i + 1, s.end());
        cout << s;
    }
}
void solve()
{
    cin >> n >> s;
    cout << n << " ";
    sinh(s);
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