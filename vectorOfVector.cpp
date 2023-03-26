#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>vc;
    for(int i=0;i<3;i++)
    {
        vector<int>temp;

        for(int j=0;j<2;j++)
        {
            int x; cin>>x;
            temp.push_back(x);
        }
       vc.push_back(temp);
    }
    for(int i=0;i<vc.size();i++)
    {
         for(int j=0;j<vc[i].size();j++)
         {
             cout<<vc[i][j]<<" ";
         }
         cout<<endl;
    }
}