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
ll n;
vll v;
ll dp[100100];
ll rec(int i){
	if(i==n-1) return 0;
	if(i>=n)return INF;
	if(dp[i]!=-1)return dp[i];
	ll ans = min(abs(v[i]-v[i+1])+rec(i+1),abs(v[i]-v[i+2])+rec(i+2));
	return dp[i]=ans;
}
void _XpectoPatronum_(){
    cin>>n;
    v.resize(n+3);
    for(int i=0;i<=n+1;i++){
    	dp[i]=-1;
    }
    foin{
    	cin>>v[i];
    }
    cout<<rec(0)<<el;
}
int32_t main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    while(t--){
        _XpectoPatronum_();
    }
}	