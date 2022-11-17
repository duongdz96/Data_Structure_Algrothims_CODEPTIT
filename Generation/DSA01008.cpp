#include <bits/stdc++.h>
using namespace std;
int a[100], n, check, k;
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
    }
    if (i == 0)
        check = 0;
    else
        a[i] = 1;
}

bool check1()
{
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        dem += a[i];
    }
    return dem == k;
}

bool check2()
{
    int dem = 0;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
            dem++;
        else
        {
            if (dem > k)
                return false;
            if (dem == k)
                cnt++;
            dem = 0;
        }
    }
    if (dem > k)
        return false;
    if (dem == k)
        cnt++;
    return cnt == 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ktao();
        check = 1;
        while (check)
        {
            if (check1())
            {
                for (int i = 1; i <= n; i++)
                {
                    cout << a[i];
                }
                cout << endl;
            }
            sinh();
        }
        // cout << endl;
        // ktao();
        // check = 1;
        // while (check)
        // {
        //     if (check2())
        //     {
        //         for (int i = 1; i <= n; i++)
        //         {
        //             cout << a[i];
        //         }
        //         cout << endl;
        //     }
        //     sinh();
        // }
        // cout << endl;
    }
}