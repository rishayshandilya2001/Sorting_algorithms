#include <bits/stdc++.h>
using namespace std;

int main()
{
 int a[6]={6,5,4,3,2,1};
 int maxi=*max_element(a,a+6);
 vector<int> v(maxi+1,0);
 for(int i=0;i<6;i++)
 {
     v[a[i]]+=1;
 }
 
 for(int i=0;i<v.size();i++)
 {
     while(v[i])
     {
         cout<<i<<"-";
         v[i]--;
     }
 }
 
}