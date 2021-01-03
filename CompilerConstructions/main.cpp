
#include<iostream>
using namespace std;
#define ll long long int
#define ld long double
#define mem(a,val) memset(a,(val),sizeof((a)))
#define FAST std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define decimal(n)  cout << fixed ; cout << setprecision((n));
#define mp make_pair
#define eb emplace_back
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define endl "\n"
#define lcm(m,n) (m)*((n)/__gcd((m),(n)))
#define rep(i,n) for(ll (i)=0;(i)<(n);(i)++)
#define rep1(i,n) for(ll (i)=1;(i)<(n);(i)++)
#define repa(i,n,a) for(ll (i)=(a);(i)<(n);(i)++)
#define repr(i,n) for(ll (i)=(n)-1;(i)>=0;(i)--)
#define tr(c,it) for(auto (it)=c.begin();(it)!=c.end();++(it))
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define vll vector<ll>
const ll N = 2e5 + 10;
vector<pll>adj[N];
void solve()
{
 ll n,m,w,u,v;
 cin>>n>>m;
 rep(i,m)
 {
  cin>>u>>v>>w;
  adj[u].pb({v,w});
  adj[v].pb({u,w});
 }
 rep1(i,n+1)
 {
  cout<<i<<" ->> ";
  for(auto child : adj[i]) cout<<"( "<<child.f<<" , "<<child.s<<" ) ";
  cout<<endl;
 }
}
signed main()
{
FAST
ll testcase=1;
// cin>>testcase;
while(testcase--) solve();
return 0;
}
