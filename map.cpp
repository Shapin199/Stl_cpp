int main() 
{
    map<int,int>mp;
    mp.insert({1,45});
    mp.insert({2,5});
    mp.insert({3,7});

    // map<int,int> :: iterator itr;
    // for(itr=mp.begin();itr!=mp.end();itr++)
    // {
    //     cout<<itr->first<<" "<<itr->second<<endl;
    // }

    for(auto x:mp) cout<<x.first<<" "<<x.second<<endl;
}


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    map<string,int>mp;
    int n;cin>>n;
    for(int i = 0;i<n ;i++)
    {
        string s;
        cin>>s;
        mp[s]++;
    }
    for(auto x:mp) cout<<x.first<<" "<<x.second<<endl;
}


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    unordered_map<string,int>mp;
    int n;cin>>n;
    for(int i = 0;i<n ;i++)
    {
        string s;
        cin>>s;
        mp[s]++;
    }
    for(auto x:mp) cout<<x.first<<" "<<x.second<<endl;
}

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    multimap<string,int>mp;
    int n;cin>>n;
    for(int i = 0;i<n ;i++)
    {
        string s;
        cin>>s;
        mp.insert({s,i});
    }
    for(auto x:mp) cout<<x.first<<" "<<x.second<<endl;
}