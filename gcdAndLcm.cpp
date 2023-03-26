/**
 *    author:  Mohammad Irtisum
 *    created: 8.02.2023        
**/
#include<bits/stdc++.h>
using namespace std;
     
using       ll          =       long long int;
using       ull         =       unsigned long long int;
     
#define     all(x)              x.begin(), x.end()
#define     rall(x)             x.rbegin(), x.rend() 
     
    
#define     in                  insert
#define     pb                  push_back
#define     ff                  first
#define     ss                  second
#define     mp                  make_pair
#define     ub                  upper_bound
#define     lb                  lower_bound
     
#define     endl                "\n"
#define     nl                  cout << "\n"
#define     YES                 cout << "YES\n"
#define     NO                  cout << "NO\n"
#define     Yes                 cout << "Yes\n"
#define     No                  cout << "No\n"
#define     debug(x)            cout << "Debug of " << #x << ": " << x << endl;
     
const int   mod         =       1e9 + 7;
     
     
bool        odd(ll num)         { return ((num & 1) == 1);  }
bool        even(ll num)        { return ((num & 1) == 0);  }
ll          sum(ll n)           { return ( (n*(n+1)) / 2 ); }
ll          ceil(ll a,ll b)     { return ( (a+(b-1)) / b ); }

//          extra               Extra Template (Pair, Set, Vector)
//          pairsort            to sort the second element of pair
//          reas                rearranging the digits of a number in ASCENDING order
//          bfs                 Breadth First Search    O( Vertex + Edge )
//          bigmod              BigMod   O( (log m) 2 log n )
//          bipartite_bfs       Bipartite Graph OR Bicolorable Graph Using BFS
//          bipartite_dfs       Bipartite Graph OR Bicolorable Graph Using DFS
//          bit                 Binary Indexed Tree   O( NlogN + QlogN )
//          bitmasking          Bitmasking
//          combination         Combination
//          dfs                 Depth First Search    O( Vertex + Edge )
//          dijkstra            Dijkstra
//          divisor             Divisor Calculation from 1 to N     O(n log n)
//          divisor_sum         Sum of Divisors Calculation from 1 to N     O(n log n)
//          dsu                 Disjoint Set Union      Average Time Complexity ~ O(nlogn)
//          rede                rearranging the digits of a number in DESCENDING order
//          gcd                 GCD & LCM (Euclidean Algorithm)
//          isprime             IsPrime  O( n / 2 )
//          lazy_segment_tree   Lazy Propagation Segment Tree of Range Update    O(NlogN + QlogN)
//          lcsubstring         LengthOfLCSubstring
//          lcsubsequence       Length or String Of LCSubsequence   O( (lenght of string 1) * (lenght of string 2) )
//          matrix_expo         Matrix Exponentiation   O( logP * N^3 )
//          mos_algorithm       Mo's Algorithm   O(QlogQ + (N + Q) * F * sqrt{N}) where F = time complexity of add, remove function
//          pbds                Policy Based Data Structure OR Ordered Set   O(logN)
//          prime_factorization Prime Factorization     O(logN)
//          segment_tree        Segment Tree of Point Update    O(NlogN + QlogN)
//          sieve               Sieve    O( n * log(log(n)) )
//          sparse_table        Sparse Table    O( NlogN + Q )
//          sumofdigits         sum the digits of a number

//                              Dynamic_Programming
//          mindifference       Minimum difference of two different subsets sum   O(size of array X half of sum)
//          numbersub           Number of times a string occurs as a subsequence in another string   O(1st string X 2nd string)
    
         
void solve()
{
    ll n,m;cin>>n>>m;
    ll g = __gcd(n,m);

    ll c = n/__gcd(n,m);
    ll l =  c*m;

    cout<<g<<" "<<l;

}
     
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     
    // int t = 1;
     
    // cin >> t;
     
    // for( int test_case = 1; test_case <= t; test_case++ )
    // {
    //      //cout << "Case " << test_case << ": ";
    //      solve();
    // }
     
     solve();
    return 0;
}





