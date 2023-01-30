#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n ; cin>>n;
    vector <int> arr;
     for(int i =0;i<n;i++)
     {
         int x; cin>>x;
         arr.push_back(x);

     }
     arr.resize(100);
     for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
}