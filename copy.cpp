#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n ; cin>>n;
     vector <int> arr,arr2;
     for(int i =0;i<n;i++)
     {
         int x; cin>>x;
         arr.push_back(x);

     }
     arr2 = arr;//copy;
     
     reverse(arr2.begin(),arr2.end());///reverse 
     for(int i =0; i< (int)arr.size();i++) cout<<arr2[i]<<" ";
    

     return 0;
}
