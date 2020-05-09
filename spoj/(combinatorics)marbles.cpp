/*Sun May 10 01:46:10 2020
   This is written by @pk_2809*/

#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vl vector<long long>
#define fin(ar,k,n) for(int i=k;i<n;i++) cin>>ar[i]
#define fout(ar,k,n) for(int i=k;i<n;i++) cout<<ar[i]<<' '
#define vs vector<string>
#define mx INT_MAX
#define mn INT_MIN
#define all(z) z.begin(),z.end()
#define mcc 1000000007
#define mcf 998244353
#define mi map<int,int>
#define mem(a,n) memset(a,n,sizeof(a))
using namespace std;

ll minl(ll a,ll b) {return (a<b)? a:b;}

ll gcd(ll a,ll b)
{
    return b ? gcd(b,a%b):a;
}

ll ncr(ll n,ll r)
{
    ll p=1,k=1;
    r=minl(r,n-r);
    if (r==0) return 1;
    else
    {
        while (r)
        {
            p*=n; k*=r;
            ll m=gcd(p,k);
            p/=m; k/=m;
            n--;r--;
        }
        return p;
    }

}

void solve()
{
    ll n,k;
    cin>>n>>k;
    cout<<ncr(n-1,n-k)<<endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
