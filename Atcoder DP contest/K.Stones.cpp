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
ll n,k;
vector<ll> v;
bool vis[100100];
bool dp[100100];
bool rec(ll stones_left){
	if(stones_left==0)return false;
	if(vis[stones_left]==true){
		return dp[stones_left];
	}
	bool ans = true;
	for(int i=0;i<n;i++){
		if(v[i]<=stones_left){
			ans &= rec(stones_left-v[i]);
		}
	}
	vis[stones_left]=true;
	return dp[stones_left]=!ans;
}
void _XpectoPatronum_(){
	cin>>n>>k;
	v.resize(n);
	foin{
		cin>>v[i];
	}    
	f(i,0,k+1){
		dp[i]=false;
		vis[i]=false;
	}
	cout<<((rec(k))?"First":"Second")<<el;
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
