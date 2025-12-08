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
ll dp[1010][1010];
ll n,m;
vector<vector<char>>v;

ll rec(int i, int j){
	if(i==n-1 and j==m-1){
		return 1;
	}
	if(i>=n || j>=m){
		return 0;
	}
	if(dp[i][j]!=-1){
		return dp[i][j];
	}
	ll ans = 0;
	if(i+1<n and v[i+1][j]!='#'){
		ans = rec(i+1,j)%INF;
	}
	if(j+1<m and v[i][j+1]!='#'){
		ans = (ans%INF + rec(i,j+1)%INF)%INF;
	}
	return dp[i][j]=ans;
}
void _XpectoPatronum_(){
    cin>>n>>m;
    memset(dp,-1,sizeof(dp));
    v.resize(n,vector<char>(m));
    foin{
    	f(j,0,m){
    		cin>>v[i][j];
    	}
    }
    cout<<rec(0,0)<<el;
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
