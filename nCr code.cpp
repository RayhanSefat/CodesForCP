/*Rabbi Zidni Eilmaa*/

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

typedef  long long int          ll;
typedef  long double            ld;
typedef  string                 str;
typedef  vector<ll>             vll;
typedef  vector<string>         vs;
typedef  vector<pair<ll, ll>>   vpl;
typedef  set<ll>                sll;
typedef  map<ll,ll>             mll;
typedef  pair<int,int>          pint;
typedef  pair<ll,ll>            pll;
double   pi = acos(-1.0);
#define  debug(x)              cerr<<#x<<" "<<x<<endl;
#define  loop                   for(ll i=1; i<=n; i++)
#define  all(a)                 (a).begin(), (a).end()
#define  min3(a,b,c)            min(a,min(b,c))
#define  max3(a,b,c)            max(a,max(b,c))
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)))
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)))

ll mod = 1e9 + 7;

void init()
{

}

ll BigMod(ll a, ll p, ll m){
    ll ans =1;
    while(p>0){
        if(p%2==1){
            ans=(ans*a)%m;
        }

        p/=2;
        a=(a*a)%m;
    }

    return (ans % mod);
}

ll fact(ll n){
    if(n<2) return 1;
    return ((n * fact(n-1)) % mod);
}

ll nCr(ll n, ll r){
    ll ans = fact(n);
    ans = (ans * BigMod(fact(r), mod-2, mod)) % mod;
    ans = (ans * BigMod(fact(n-r), mod-2, mod)) % mod;
    return ans;
}

void solve()
{

}

int main()
{
    //freopen("input1.txt", "r", stdin);

//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    init();
    ll t=1;
    cin>>t;
    getchar();
    while(t--)
        solve();

    return 0;
}
