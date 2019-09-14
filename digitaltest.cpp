#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
     unsigned long int n1, n2, i ,j; // declared as unsigned long int, as the no.s are large
     
     int a=0,b=0,x=0 , y=0;

     cin>>n1>>n2; // input the two limits
     getchar();

     for(i=n1;i<=n2;i++)  // loop to find out the count of prime no.s
     {
          a=0;
          for(j=1;j<i/2;j++)
          {
               if(i%j==0)
                    a++;
          }
          if(a==1)
               y++;
     }

     unsigned long int arr[y]; // array to store all the prime no.s

     for(i=n1;i<=n2;i++)  // loop to find out the prime no.s
     {
          a=0;
          for(j=1;j<i/2;j++)
          {
               if(i%j==0)
                    a++;
          }
          if(a==1)
               arr[b++]=i;
     }

     for(i=0;i<b;i++) //  nested loops to calculate the difference between prime no.s
     {                //  and check if they are 6 or not
          for(j=i+1;j<b;j++)
          {
               if(arr[j]-arr[i]==6)
                    x++;
          }
     }
     cout<<x; // output the name

     return 0;

}
