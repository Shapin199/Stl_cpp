#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<pair<int,int>>vc;
    vc.push_back({1,2});
    vc.push_back({5,9});
    vc.push_back({13,15});

    for(int i=0;i<vc.size();i++)
    {
        cout<<vc[i].first<<" "<<vc[i].second<<endl;
    }

}