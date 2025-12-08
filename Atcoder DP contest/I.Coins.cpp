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
vector<double> p;
double dp[3030][3030];
double rec(int i, int j){
	if(i==0){
		if(j==0){
			return 1;
		}
		else{
			return 0;
		}
	}
	if(dp[i][j]>-0.5){
		return dp[i][j];
	}
	double ans = 0.0;
	if(i!=0){
		ans = (1-p[i])*rec(i-1,j);
	}
	if(i!=0 and j!=0){
		ans += p[i]*rec(i-1,j-1);
	}
	return dp[i][j]=ans;
}
void _XpectoPatronum_(){
    cin>>n;
    p.resize(n+1);
    f(i,1,n+1){
    	cin>>p[i];
    }
    for(int i=0;i<3030;i++){
    	for(int j=0;j<3030;j++){
    		dp[i][j]=-1.0;
    	}
    }
    double ans = 0.0;
    for(int i=n/2+1;i<=n;i++){
    	ans += rec(n,i);
    }
    cout<<setprecision(10)<<ans<<el;
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
