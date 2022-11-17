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
int n,k,a[100],ok;
void ktao(){
    for(int i=1;i<=n;i++) a[i]=i;
}
void sinh(){
    int i=k;
    while (i>=1&&a[i]==n-k+i)
    {
        i--;
        /* code */
    }
    if(i==0) ok=0;
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
    }
}
void solve(){
    cin>>n>>k;
    ok=1;
    ktao();
    while (ok)
    {
        for(int i=1;i<=k;i++){
            char c='A';
            c+=a[i]-1;
            cout<<c;
        }
        cout<<endl;
        sinh();
        /* code */
    }
    
}
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
