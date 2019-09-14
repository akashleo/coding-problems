#include<bits/stdc++.h> 
using namespace std; 
  
  
// Driver program to test above function 
int main() 
{ 
    string s;  
    int i=0,j=0, x=(int)'a' ,y=(int)'z', m=0;
    cin>>s;
    int a= s.length();
    char ch=' ';
    int Arr[26]={0};
    for(i=0;i<a;i++)
    {
         ch= s.at(i);
         m= (int)ch;
         if(m >= x && m <=y)
         {
              Arr[m-x]++;
         }
    }
    for(i=0;i<26;i++)
    {
         for(j=0;j<Arr[i];j++)
         {
              cout<<(char)(i+x);
         }
    }

    return 0; 
} 