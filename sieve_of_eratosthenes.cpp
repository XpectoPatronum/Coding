//Author-XpectoPatronum
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
typedef pair<ll,ll> ii;
#define f(i,a,b) for(int i = a;i < b;i++)
#define foin f(i,0,n)
#define pb push_back
#define vll vector<ll>
#define F first
#define S second
#define el endl
#define all(x) (x).begin(), (x).end()
///////////////VECTOR PRINT///////////////
void vpri(vector<ll> v){
    for(ll i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
}
//////////////////////////////////////////
///sieve of erastothenes
void hehe(){
    int n;
    cin>>n;

    vll prime(n+1,1);
    prime[1]=0;

    for(int i=2;i<=n;i++){
    	if(!prime[i])continue;
    	for(int j=i*i;j<=n;j+=i){
    		prime[j]=0;
    	}
    }

    vpri(prime);
}
int32_t main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        hehe();
    }
}
