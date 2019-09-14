#include <iostream>
#include <sstream>  // for string streams 
#include <string>  // for string 
#include <bits/stdc++.h>
using namespace std;

int lastno(int a)
{
     int x;
     while(a>0)
     {
          x=a%10;
          a=a/10;
     }
}

int main()
{
     int t, n, x=0;
     string s;
     cin>>t;
     getchar();

     while(t>0)
     {
          cin>>n;
          x=0;
          int A[n];
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