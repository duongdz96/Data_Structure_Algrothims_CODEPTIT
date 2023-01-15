#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int t,l,r;
vector<int> res;
bool check(int n){
	set<int>se;
	while(n){
		if (se.count(n%10)){
			return false;
		}
		se.insert(n%10);
		n/=10;
	}
	return true;
}
void kt(){
	queue<int>q;
	for (int i=1;i<=5;i++){
		q.push(i);
	}
	res.push_back(0);
	while(1){
		int top=q.front();
		q.pop();
		res.push_back(top);
		if (top>=1e5) break;
		for (int i=0;i<=5;i++){
			int tmp=top*10+i;
			if (check(tmp)){
				q.push(tmp);
			}
		}

	}
}
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
	kt();
	cin>>t;while(t--){
		cin>>l>>r;
		int cnt=0;
		for(int x:res){
			if(x>=l && x<=r){
				cnt++;
			}
		}
		cout<<cnt<<endl;

	}   
}  