/*Rabbi Zidni Eilmaa*/

#include<bits/stdc++.h>
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
#define  debug(x)              cout<<#x<<" "<<x<<endl;
#define  loop                   for(int i=1; i<=n; i++)
#define  all(a)                 (a).begin(), (a).end()
#define  min3(a,b,c)            min(a,min(b,c))
#define  max3(a,b,c)            max(a,max(b,c))
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)))
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)))
#define  forn(i, n)             fot(int i=1; i<=(int)n; i++)
#define  ANS                    cout << ans << "\n"
#define  PY                     cout << "YES\n"
#define  PN                     cout << "NO\n"

ll mod = 1e9 + 7;

void init(){

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

    return ans;
}

// 151, 153, 1e9 + 7, 1e9 + 9
vector<pair<ll, ll> > HashUp( string s, ll p1, ll p2, ll mod1, ll mod2){
    int n = s.size();
    vector<pair<ll, ll> >hashValues(n+2, {0, 0});
    ll pod1 = 1, pod2 = 1;
    ll curr1 = 0, curr2 = 0;

    for(int i=0; i<n; i++){
        pod1 = (pod1 * p1) % mod1;
        curr1 = (curr1 + ((s[i] * pod1)) % mod1) % mod1;
        hashValues[i].first = curr1;

        pod2 = (pod2 * p2) % mod2;
        curr2 = (curr2 + ((s[i] * pod2)) % mod2) % mod2;
        hashValues[i].second = curr2;
    }

    return hashValues;
}

void solve()
{
    

    return;
}

int main()
{
    //freopen("input1.txt", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    init();
    int t=1;
    //cin>>t;
    //getchar();
    for(int i=1; i<=t; i++){
        //cout << "Case " << i << ": ";
        solve();
    }

    return 0;
}
