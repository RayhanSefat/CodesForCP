#include<bits/stdc++.h>
#include<string.h>
using namespace std;

typedef  long long int          ll;
typedef  long double            ld;
typedef  string                 str;
typedef  vector<ll>             vll;
typedef  vector<string>         vs;
typedef  vector<pair<int,int> >  vpi;
typedef  set<ll>                s;
typedef  map<ll,ll>             mll;
typedef  pair<int,int>          pint;
typedef  pair<ll,ll>            pll;
double   pi = 3.14159265359;
#define  FOR(n,v)              for(ll i=0;i<n;i++) cin>>v[i];
#define  REP(i,n)              for(int i=0;i<n;i++)
#define  pb                    push_back
#define  Mp                    make_pair
#define  ttimes                ll t; cin>>t; while(t--)
#define  fastIO                ios_base::sync_with_stdio(false);
#define  nl                    cout<<"\n";
#define  sort_a(v)             sort(v,v+n);
#define  msort(a)              sort(a+1, a+n+1);
#define  loop                  for(ll i=1; i<=n; i++)
#define  all(v)               v.begin(),v.end()
#define  sort_d(v)             sort(v.begin(),v.end(),greater<ll>() );
#define  input                 for(ll y=1; y<=n; y++)cin>>a[y];
#define  py                    printf("YES\n");
#define  pn                    printf("NO\n");
#define  pmone                 printf("-1\n");
#define  debug(x)              cout<<#x<<" "<<x<<endl;


// This function will return (a/b)%mod
ll mod_div(ll a, ll b, ll mod){
    if(a%b==0){
        a=a/b;
        return a%mod;
    }

    a=a%mod;
    b=b%mod;

    //determining the modular inverse/ multiplicative inverse of b
    ll i=0;
    while(i<mod){
        ll x=(b*i)%mod;
        if(x==1)break;
        i++;
    }

    return (a*i)%mod;
}

int main(){
    ll a, b, mod;
    cin>>a>>b>>mod;

    cout<<mod_div(a, b, mod);

    return 0;
}
