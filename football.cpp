#include <iostream>
using namespace std;


int main()
{
     int t, n , x=0, y=0;
     cin>>t;
     getchar();

     while(t>0)
     {
          cin>>n;
          getchar();
          int sum =0;
          int A[n], B[n] ,R[n];
          for(int i=0;i<n;i++)
          {
               cin>>A[i];
          }
          getchar();
          for(int i=0;i<n;i++)
          {
               cin>>B[i];
          }
          getchar();


          for(int i=0;i<n;i++)
          {
               x=-10*B[i];
               y=20*A[i];
               if(x+y<0)
                    R[i]=0;
               else
                    R[i]=x+y;

               //cout<<R[i]<<"\t";
               
               if(sum<R[i])
                    sum= R[i];              
               
          }

          cout<<"\n"<<sum<<endl;
          t--;
     }


}