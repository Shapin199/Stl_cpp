#include <bits/stdc++.h>
using namespace std;

// ****arr.insert(position,value);

int main()
{
     int n ; cin>>n;
     vector <int> arr;
     for(int i =0;i<n;i++)
     {
         int x; cin>>x;
         arr.push_back(x);

     }
     
     arr.insert(arr.begin()+2,1);
     
     for(int i =0; i< (int)arr.size();i++) cout<<arr[i]<<" ";

     return 0;
}