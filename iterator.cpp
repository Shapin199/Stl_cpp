#include <bits/stdc++.h>
using namespace std;
// iterator kinds of pointer

void printVec(vector<int>v2,string s ="")
{
     cout<<s;
     for(int i=0;i<(int)v2.size();i++) cout << v2[i]<<" ";
         
    cout<<"\n";
}

int main() 
{
    int n ; cin>>n;

    vector <int> arr;
    vector<int>::iterator it;// vector same data type hoba iterator;

     for(int i =0;i<n;i++)
     {
         int x; cin>>x;
         arr.push_back(x);

     }

    cout<< *arr.begin()<<endl;/// print first element ;
    cout<< *(arr.begin()+1)<<endl;///2nd element print ;
    cout<< *(arr.end()-1)<<endl; //last element print;

    it = arr.begin();
    it++;
    cout<< *(it+1)<<endl;
    cout<< *it<<endl;


    //  arr.erase(arr.end()-1);

    for( it = arr.begin(); it !=arr.end(); it++)
    {
        cout<< *it <<endl;
    }
    
    it = find(arr.begin(),arr.end(),2 );
    cout<<"find "<< it - arr.begin()<<endl;

    it = find(arr.begin(),arr.end(),41 );
    cout<<"Not find "<< it - arr.begin()<<endl;//print arr.end();

    it =find(arr.begin(),arr.begin()+2,1);
    cout<<"find "<< it - arr.begin()<<endl;

    sort(arr.begin(),arr.begin()+4);///1 index;
    for( it = arr.begin(); it !=arr.end(); it++)
    {
        cout<<"sort "<< *it <<endl;
    }

    cout<< *(arr.end()-1)<<endl;
  
    it = find(arr.begin(),arr.end(),41 );
    cout<< it - arr.begin()<<endl;

     if(it!= arr.end())
       cout<<"found"<<endl;

// Range Based
// For loop-------

        auto x = "Sahpin";
  cout<<x<<endl;

  for(int x : arr)
     cout << x<< " ";
  
    cout<<endl;

    string s="Shapin";
    for(auto x : s)
       cout << x<< " ";
     
     cout<<endl;

       for( auto &x : arr)
           x+=2;
    
       for(auto x : arr) 
           cout << x<< " ";

// Range Based
// For loop-------input
    
     int n ; cin>>n;
     vector <int> arr(n),arr2;
     for(auto &x:arr)
     {
            cin>>x;
     }
  
     for(int i =0; i< (int)arr.size();i++) cout<<arr[i]<<" ";
           
}