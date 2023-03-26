#include <bits/stdc++.h>
using namespace std;

// delete---------

//**** vec.erase(position);

//**** vec.erase(starPosition,endPosition+1); range delete;

//****arr.clear(); all array deleted


//****pop_back() remove the last element ;

int main() 
{
   int n;
   cin>>n;

   vector<int>a;
   for( int i= 0 ;i<n; i++) { int x ; cin>>x; a.push_back(x); }

   int m;
   cin>>m;
   m--;
   a.erase(a.begin()+m);
//    for( int i= 0 ; i<(int)a.size(); i++) cout<<a[i]<<" ";
        int p,q;
        cin>>p>>q;
    p--;q--;
    a.erase(a.begin()+p,a.begin()+q);
    
    cout<<a.size()<<endl;
    for( int i= 0 ; i<(int)a.size(); i++) cout<<a[i]<<" ";
}