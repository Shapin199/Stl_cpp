#include <bits/stdc++.h>
using namespace std;
int main() 
{
    set<char>st;
    int n;cin>>n;
    for(int i = 0;i<n ;i++)
    {
        char ch;
        cin>>ch;
        st.insert(ch);
    }
    for(auto x:st) cout<<x<<endl;
}