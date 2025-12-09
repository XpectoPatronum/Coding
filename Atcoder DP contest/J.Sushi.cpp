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
double n;
double dp[303][303][303];
//dp [i][j][k] represents the expected value of operations to finish all sushis 
//when i plates of 1 sushi, j plates of 2 sushi and k plates of 3 sushi are left
double rec(int i, int j, int k) {
    int S = i + j + k;
    if (S == 0) return 0.0;
    if (dp[i][j][k] > -0.5) return dp[i][j][k];
    
    double expected_future_moves = 0.0;
    
    if (k > 0) {
        expected_future_moves += (double)k * rec(i, j + 1, k - 1);
    }
    if (j > 0) {
        expected_future_moves += (double)j * rec(i + 1, j - 1, k);
    }
    if (i > 0) {
        expected_future_moves += (double)i * rec(i - 1, j, k);
    }
    double result = (double)n / S + expected_future_moves / S;

    return dp[i][j][k] = result;
}
void _XpectoPatronum_(){
	cin>>n;
	f(i,0,n+1){ 
		f(j,0,n+1){
			f(k,0,n+1){
                dp[i][j][k]=-1.0;
			}
		}
	}
	ll p=0, q=0, r=0; 
    ll val;
	f(i,0,n){
		cin>>val;
		if(val==1)p++;
		if(val==2)q++;
		if(val==3)r++;
	}
	cout << fixed << setprecision(10) << rec(p,q,r) << el;
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