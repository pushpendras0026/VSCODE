#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep0(i,n) for (int i=0;i<(n);i++)
#define rep1(i,n) for (int i=1;i<=(n);i++)
#define rep(i,a,b) for (int i=(a);i<=(b);i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>  
#define vl vector<ll> 
typedef  unsigned long long ull;
#define per0(i,n) for (int i=(n)-1;i>=0;i--)
#define per1(i,n) for (int i=(n);i>0;i--)
#define per(i,a,b) for (int i=(b);i>=(a);i--)
#define endl '\n'
#define fast  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define setbits(x) __builtin_popcountll(x)
#define yes cout<<"YES"<<endl;
#define  no cout<<"NO"<<endl;
#define llmax 1e18
#define llmin -1e18
void solve(){
  ll n;cin>>n;
  vl v(n+1);
  rep1(i,n)cin>>v[i];
  ll ans=llmax;
  ll i=1;
  while(i<=n){
    ll j=i;
    while(j+1<=n&&v[j+1]==v[i])j++;
    ll cost=(i-1)*v[i]+(n-j)*v[j];
    ans=min(ans,cost);i=j+1;
  }
 cout<<ans<<endl;
}
int main(){
   fast;
   ll t;
   cin>>t;
   while(t--){
    solve();
   }
}