#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
     int t, n, x=0;
     string s;
     cin>>t;
     getchar();

     while(t>0)
     {
          cin>>s;
          x=0;
          n=s.length();
          for(int i=0;i<n;i++)
          {
               //cout<<s.at(i);
               if(s.at(i)=='1')
                    x++;               
          }

          if(x%2==0)
               cout<<"LOSE\n";
          else  
               cout<<"WIN\n";

          t--;
     }
     return 0;

}