#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vectorArr[3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            int x; cin>>x;
            vectorArr[i].push_back(x);
        }
    }

    // for(int i=0;i<3;i++)
    // {
    //     vectorArr[i].resize(2);
    //     for(int j=0;j<2;j++)
    //     {
            
    //         cin>>vectorArr[i][j];
    //     }
    // }
    
    for(int i=0;i<3;i++)
    {
         for(int j=0;j<2;j++)
         {
             cout<<vectorArr[i][j]<<" ";
         }
         cout<<endl;
    }
}