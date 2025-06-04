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
void solve(){
  ll n,m;
   cin>>n>>m;
   vl v(m);
   set<ll>st;
   rep0(i,m){
     ll a;cin>>a; st.insert(a);
   }
   v={st.begin(),st.end()};
   vl temp(m);
   rep0(i,m)temp[i]=v[i]/100;
   vector<pll>ans;
ll i=0,j=m-1;
while(i<j){
  ans.pb({v[i],v[j]});
  ans.pb({v[j],v[i]});
  i++;j--;
}
ans.pb({v[i],v[i]});
  rep0(i,n){
    ll e=ans[i].F;
    ll o=ans[i].S;
    for(int j=0;j<6;j++){
      if(j%2==0)cout<<e<<" ";
      else cout<<o<<" ";
    }
    cout<<endl;
  }
  }

int main(){
   fast;
   ll t;
   cin>>t;
   while(t--){
    solve();
   }
}