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
ll rec(ll i, ll val){
	if(i==n){
		if(val==0)return 0;
		else return INT_MAX;
	}
	if(dp[i][val]!=-1){
		return dp[i][val];
	}
	ll ans = rec(i+1,val);
	if(v[i].S<=val){
		ans=min(ans,v[i].F+rec(i+1,val-v[i].S));
	}
	return dp[i][val]=ans;
}
void _XpectoPatronum_(){
   	cin>>n>>W;
   	v.resize(n+10);
   	ll sum =0;
   	foin{
   		ll w,val;
   		cin>>w>>val;
   		sum+=val;
   		v[i] = make_pair(w,val);
   	}
   	memset(dp,-1,sizeof(dp));
   	ll fans=0, maxi=0;
    for(ll i=sum;i>=1;i--){
        if(rec(0,i)>W)continue;
        fans=i;
        break;
    }
    cout<<fans<<endl;
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