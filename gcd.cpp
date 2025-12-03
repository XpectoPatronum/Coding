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
//this returns gcd
//euclidean algo is gcd(a,b) = gcd(a,b-a)
//which extends to gcd(a,b) = gcd(a,b%a)
//otherwise we can directly use __gcd(a,b)
int gcd(int a, int b){
	if(a==0)
		return b;
	return gcd(b%a,a);
}
void hehe(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<el;
}
int32_t main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    while(t--){
        hehe();
    }
}
