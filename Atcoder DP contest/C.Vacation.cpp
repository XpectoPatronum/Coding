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
vector<vector<ll>>v;
ll dp[100100][3];

ll rec(int i, int last){
	if(i>n)return 0;
	if(dp[i][last]!=-1){
		return dp[i][last];
	}
	ll ans;
	if(last==0){
		ans=max(v[i][1]+rec(i+1,1),v[i][2]+rec(i+1,2));
	}
	else if(last == 1){
		ans=max(v[i][0]+rec(i+1,0),v[i][2]+rec(i+1,2));
	}
	else if(last == 2){
		ans=max(v[i][0]+rec(i+1,0),v[i][1]+rec(i+1,1));
	}
	return dp[i][last] = ans;
}
void _XpectoPatronum_(){
	cin>>n;
	v.resize(n+1,vector<ll>(3));
	for(int i=0;i<n;i++){
		ll a,b,c;
		cin>>a>>b>>c;
		v[i]={a,b,c};
	}
	for(int i=0;i<=n+10;i++){
		for(int j=0;j<=2;j++){
			dp[i][j]=-1;
		}
	}	
	rec(0,0);
	rec(0,1);
	rec(0,2);
	cout<<max({dp[0][0],dp[0][1],dp[0][2]})<<endl;
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