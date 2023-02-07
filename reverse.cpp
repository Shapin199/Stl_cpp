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
     
     reverse(arr.begin(),arr.end());///reverse 
     for(int i =0; i< (int)arr.size();i++) cout<<arr[i]<<" ";
    

     return 0;
}
