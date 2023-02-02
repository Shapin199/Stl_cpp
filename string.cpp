#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
   int n;
    // s ="abc abc";
    // cin>>s;
    cin>>n;
    cin.ignore();

    // getline(cin,s);

    getline(cin,s,'*');

    for(int i=0;i<s.size();i++)
             cout<<s[i];



                string s = "abul",t="khan";

                string::iterator it;

                for(it = s.begin();it != s.end();it++)
                        cout<<*it<<endl;


    
    string s = "abul",t="khan";
    string a = s+" "+t;
    cout<<a<<endl;


                string s;
                getline(cin,s);
                for(int i = 0 ;s[i]; i++)
                        s[i]++;
                
                cout << s<<endl;


string s = "abul",t="khan";
string a = s+ " " +t;
a.push_back('s');
a.push_back('p');
a.pop_back();
cout<<a<<endl;       


        string s = "abul",t="khan";
        string a = s+ " " +t;
        a += 's';
        cout<<a<<endl;


  string s = "abul",t="khan";
   if(s < t) cout<<"s is smaller"<<endl;
   else cout<<"t is smaller"<<endl;


                string s = "abul",t="khan";
                s=t;//copy t 
                cout<<t<<endl; 

  	string s;
   	getline(cin,s);
	int it=s.find(' ');
	cout<<it<<endl;
     

                        string s;
                    getline(cin,s);
                    //   string t =s.substr(3,4);//3 thakei start r 4 holo 4 char neba;
                    //   cout<<t<<endl;
                    //   string t =s.substr(3);//3 thakei start and last char  a jaba;
                    //   cout<<t<<endl;
                    int pos = find(s.begin(),s.end(),' ')  - s.begin() ;
                    cout<<pos<<endl;

                    //    getline(cin,s);

                    //    int pos = find(s.begin())


    string s;
   	getline(cin,s);
	int pos=s.find(' ');
	if(pos<s.size()) cout <<  "Found at "<<pos;
    else cout <<  " Not Found . "<<pos;



            string s;
            getline(cin,s);
            int pos=s.find(' ');
            string t= s.substr(pos+1);
            cout<<t<<endl;
    

    string s;
   	getline(cin,s);
    s.erase(2,5);
    cout<<s<<endl;
}
