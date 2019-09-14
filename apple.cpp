#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
     int t, n ,k, x=0, y=0;
     cin>>t;
     getchar();

     while(t>0)
     {
          cin>>n;
          cin>>k;
          getchar();

          if( n%k!=0)
          {
               cout<<"YES"<<endl;
               continue;
          }

          int sum =0;
          int A[k], B[k];
          x=k;
          for(int i=0;i<k;i++)
          {
               A[i]=B[i]=0;
          }
          y=0;
          while(x>0)
          {
               if(y==k)
               {
                    y=0;
               }
               A[y]=A[y]+1;
               x--;
               y++;

          }
          x=k;
          y=0;
          while(x>0)
          {
               y= k*rand();
               if(x>=k)
               {
                    B[y]=B[y]+k;
                    x=x-k;
               }
               else
               {
                    B[y]=B[y]+x;
                    x=0;
               }
          }


          for(int i=0;i<k;i++)
          {
               if(A[i]==B[i])
               {
                    cout<<"NO"<<endl;
                    break;
               }
               else
               {
                    cout<<"YES"<<endl;
                    break;
               }
               
          }

          t--;
     }


}