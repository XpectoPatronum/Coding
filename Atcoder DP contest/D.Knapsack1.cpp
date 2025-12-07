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
    f(i,0,(ll)v.size()) cout<<v[i]<<" ";
    cout<<'\n';
}
//////////////////////////////////////////
ll n,W;
vector<pair<ll,ll>>v;
ll dp[115][100100];
ll rec(int i, int w_left){//returns the maximum val if w_left is the weight left
	if(i>=n)return 0;
	if(dp[i][w_left]!=-1)return dp[i][w_left];
	ll ans = 0;
	if(w_left>=v[i].F)
		ans=max(ans,v[i].S+rec(i+1,w_left-v[i].F));
	ans = max(ans,rec(i+1,w_left));
	return dp[i][w_left]=ans;
}
void _XpectoPatronum_(){
   	cin>>n>>W;
   	v.resize(n+10);
   	foin{
   		ll w,val;
   		cin>>w>>val;
   		v[i] = make_pair(w,val);
   	}
   	for(int i=0;i<=n;i++){
   		for(int j=0;j<=W;j++){
   			dp[i][j]=-1;
   		}
   	}
   	cout<<rec(0,W)<<el;

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