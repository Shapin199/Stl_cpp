/**
 *    author:  Mohammad Irtisum
 *    created: 7.02.2023        
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ii pair<ll,ll>
#define pb push_back
#define ff first
#define INF 1e18
#define nl "\n"
#define sp " "
#define ss second
using namespace std;
using namespace __gnu_pbds;
template <typename PB>
using ordered_set = tree<PB,null_type,less_equal<PB>,rb_tree_tag,tree_order_statistics_node_update> ;

bool isSetBit(ll n, ll i) { ll x = n & (1 << i); return x;}
void setBit(ll &n, ll i){ n = n | (1 << i);}
void unsetBit(ll &n, ll i){n = n & (~(1 << i));}
void toggleBit(ll &n, ll i){ n = n ^ (1 << i);}
void sublime()
{
    //#ifndef ONLINE_JUDGE
        //freopen("input.txt", "r+", stdin);
        //freopen("output.txt", "w+", stdout);
    //#endif
}
const ll mod = 1e9+7;
int lg2(const int &x){return 31 - __builtin_clz(x);}
ll bigMod(ll a,ll b){a%=mod;ll res=1;while(b>0){if(b&1)res=(res*a)%mod;a=(a*a)%mod;b>>=1;}return res;}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll getRandomNumber(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);} 
inline ll MOD(ll a){ return (a%mod + mod) %mod ; }
inline ll modAdd(ll a,ll b){ return MOD( MOD(a) + MOD(b) ) ; }
inline ll modSub(ll a,ll b){ return MOD( MOD(a) - MOD(b) ) ; }
inline ll modMul(ll a,ll b){ return MOD( MOD(a) * MOD(b) ) ; }
inline ll modInv(ll a){ return bigMod(a,mod-2) ; }
inline ll modDiv(ll a,ll b){ a=MOD(a); b=modInv(b); return (a*b)%mod; }
ll lcm(ll a, ll b){return (a * (b /__gcd(a, b)));}
ll fix_mod(ll a,ll b){return (a%b+b)%b;}
int main()
{
    FASTIO
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int alice=0,bob=0;

        int x=0;
        int k=0;
        while(n>0)
        {
            if(k)
            {
                alice+=min(x,n);
                n-=min(x,n);
                x++;
                if(n>0)
                {
                    alice+=min(n,x);
                    n-=min(x,n);
                    x++;
                }
            }
            else{
                bob+=min(x,n);
                n-=min(x,n);
                x++;
                if(n>0)
                {
                    bob+=min(n,x);
                    n-=min(x,n);
                    x++;
                }
            }
            k^=1;
        }
        cout<<bob<<" "<<alice<<nl;
    }
}