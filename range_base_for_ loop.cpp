#include <bits/stdc++.h>
using namespace std;
// iterator kinds of pointer



int main() 
{
    int n ; cin>>n;

    vector <int> arr(n); ///size must ;
    for(auto &x : arr)
       cin>>x;
    
    for(auto x : arr)
       cout<<x<<" ";
}