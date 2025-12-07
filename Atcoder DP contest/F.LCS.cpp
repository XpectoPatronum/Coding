#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
typedef pair<ll,ll> ii;
#define f(i,a,b) for(ll i = a;i < b;i++)
#define foin f(i,0,n)
#define pb push_back
#define vll vector<ll>
#define F first
#define S second
#define el endl
#define all(x) (x).begin(), (x).end()
void vpri(vector<ll> v){
    f(i,0,v.size()) cout<<v[i]<<" ";
    cout<<'\n';
}
//////////////////////////////////////////
ll n,m;
string a,b;
ll dp[3030][3030];
string fans;
ll rec(int i, int j){
	if(i==n || j==m){
		return 0;
	}
	if(dp[i][j]!=-1){
		return dp[i][j];
	}
	ll ans= 0;
	ans = max({ans,rec(i+1,j),rec(i,j+1)});
	if(a[i]==b[j]) ans = max(ans,1+rec(i+1,j+1));
	return dp[i][j]=ans;
}
void printset(int i, int j){
	if(i==n||j==m){
		return;
	}
	ll ans = 0;
	if(a[i]==b[j]){
		ans = max(ans,1+rec(i+1,j+1));
	}
	else{
		ans = max(rec(i+1,j),rec(i,j+1));
	}

	if(ans == (1+rec(i+1,j+1)) and a[i]==b[j]){
		cout<<a[i];
		printset(i+1,j+1);
	}
	else if(rec(i+1,j)==ans){
		printset(i+1,j);
	}
	else{
		printset(i,j+1);
	}
}

void _XpectoPatronum_(){
	memset(dp,-1,sizeof(dp));
    cin>>a>>b;
    n=a.size(),m=b.size();
    rec(0,0);
	printset(0,0);
}
int32_t main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        _XpectoPatronum_();
    }
}