/*Sun May 10 01:48:51 2020
   This is written by @pk_2809*/


#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define vi vector<int>
#define vl vector<long long>
#define vvi vector<vector<int>>
#define fin(ar,k,n) for(int i=k;i<n;i++) cin>>ar[i]
#define fout(ar,k,n) for(int i=k;i<n;i++) cout<<ar[i]<<' '
#define all(z) z.begin(),z.end()
#define mcc ((int)1e9+7)
#define mcf 998244353
#define mi map<int,int>
#define mem(a,n) memset(a,n,sizeof(a))
#define pii pair<int,int>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> fst;
typedef long long ll;

const int N=3e5+7;
int dp[N], sum[N], ar[N];

void solve()
{
    mem(dp,0); mem(sum,0);
	int n,l,pt=1,ans=0;
	cin>>n>>l;
	fin(ar,1,n+1);
	sort(ar,ar+n);
	for (int i=1;i<=n;i++)
	{
		while(pt<=i && ar[pt]+l<=ar[i]) pt++;
		dp[i]=(sum[pt-1]+1)%mcc;
		sum[i]=(sum[i-1]+dp[i])%mcc;
		ans=(ans+dp[i])%mcc;
	}
	cout<<ans<<endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
