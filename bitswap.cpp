#include<bits/stdc++.h> 
using namespace std; 
  
  
// Driver program to test above function 
int main() 
{ 
    int a, b;  
    int i=0,j=0, x=(int)'a' ,y=(int)'z', m=0;
    cin>>a;
    int A[32]={0};
    b=0;
    while(a>0)
    {
         if(a%2==0)
         {
              A[i++]=0;
         }
         else
         {
              A[i++]=1;
         }
         a=a/2;
         b++;
         
    }
    /*for(i=0;i<b;i++)
    {
         m=m+ A[i]*pow(2,i);
    }
   cout<<m;
   m=0;*/
   //swapping ith and jth integers
     cin>>x>>y;
     j=A[x];
     A[x]=A[y];
     A[y]=j;
    for(i=0;i<b;i++)
    {
         m=m+ A[i]*pow(2,i);
    }
     cout<<m;
    return 0; 
} 