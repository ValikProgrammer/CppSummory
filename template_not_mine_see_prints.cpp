#include<bits/stdc++.h>
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp> 
//#include <ext/pb_ds/tree_policy.hpp> 
//using namespace __gnu_pbds; 
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL)
typedef long long ll;
typedef long double ld;
#define trace(x)  cerr << #x << ": " << x << endl;
#define rep(i,a)  for(ll i=0; i< a; i++)
#define pb push_back
#define vl vector<ll>
void __print(ll x) {cerr << x;}
void __print(ld x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
int main()
{
	fast;
	ll t;cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		string s;cin>>s;reverse(s.begin(),s.end());
		ll cnt=0;
		while(!s.empty())
		{
			if(s.size()==1)
			{
				s.pop_back();cnt++;continue;
			}
			if(s.back()==s[s.size()-2])
			{
				cnt++;char c=s.back();
				while(s.size() && s.back()==c)s.pop_back();
			}
			else
			{
				cnt++;s.pop_back();s.erase(s.begin());
			}
		}
		cout<<cnt<<"\n";
	}
}



#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define uint unsigned
#define pii pair<int,int>
#define pll pair<ll,ll>
#define IT iterator
#define PB push_back
#define fi first
#define se second
#define For(i,j,k) for (int i=(int)(j);i<=(int)(k);i++)
#define Rep(i,j,k) for (int i=(int)(j);i>=(int)(k);i--)
#define CLR(a,v) memset(a,v,sizeof(a));
#define CPY(a,b) memcpy(a,b,sizeof(a));
#define debug puts("wzpakking")
#define y1 ysghysgsygsh