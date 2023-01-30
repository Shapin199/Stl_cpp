#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n ; cin>>n;
    vector <int> arr;
    vector<int>::iterator it;
     for(int i =0;i<n;i++)
     {
         int x; cin>>x;
         arr.push_back(x);

     }
    cout<< *arr.begin()<<endl;
    cout<< *(arr.begin()+1)<<endl;
    cout<< *(arr.end()-1)<<endl;
}