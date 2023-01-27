#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
// #define vi vector<int>;
#define pb push_back;

void push_back()
{
    //    int n;
//    cin>>n;
//    vector<int>arr;

//    arr.push_back(5);
//    arr.push_back(19);
//    arr.push_back(31);
   
//    cout << arr[0]<<endl;

//    cout << (int) arr.size()<<endl;/// int use kora vlo kaj na korla plm nai;
   
//     for(int i=0;i<arr.size();i++) cout << arr[i]<<endl;


//    keybord input

    // int n ; cin>>n;
    // vector <int> arr(5,10);
    //  for(int i =0;i<n;i++)
    //  {
    //      int x; cin>>x;
    //      arr.push_back(x);

    //  }
    //  for(int i=0;i<arr.size();i++) cout << arr[i]<<endl;

    // copy

    //  int n ; cin>>n;
    // vector <int> arr,v;
    //  for(int i =0;i<n;i++)
    //  {
    //      int x; cin>>x;
    //      arr.push_back(x);

    //  }
    //  v = arr;///copy ;
    //  for(int i=0;i<v.size();i++) cout << arr[i]<<" ";


    int n ; cin>>n;
    vector <int> arr;
     for(int i =0;i<n;i++)
     {
         int x; cin>>x;
         arr.push_back(x);

     }
     for(int i=0;i<arr.size();i++) cout << arr[i]<<endl;
}

void pop_back()
{
        int n ; cin>>n;
    vector <int> arr;
     for(int i =0;i<n;i++)
     {
         int x; cin>>x;
         arr.push_back(x);

     }
   
     for(int i=0;i<arr.size();i++) cout << arr[i]<<" ";

    // pop_back
    // last thakai element deleted kora ;
     arr.pop_back();
     arr.pop_back();
     arr.pop_back();
     cout<<"\n";
     for(int i=0;i<arr.size();i++) cout << arr[i]<<" ";
}

void erase()
{
        int n ; cin>>n;
    vector <int> arr;
     for(int i =0;i<n;i++)
     {
         int x; cin>>x;
         arr.push_back(x);

     }
   
     for(int i=0;i<arr.size();i++) cout << arr[i]<<" ";
     cout<<"\n";
    
     arr.erase(arr.begin()+2);
     for(int i=0;i<arr.size();i++) cout << arr[i]<<" ";
}
int main() 
{
   push_back();
}
