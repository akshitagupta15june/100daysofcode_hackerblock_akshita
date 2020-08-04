#include<iostream>
using namespace std;
int main () {
   int n,kaleen[5000],bablu[5000],sum1=0,sum2=0,sum=0,count1=0,count2=0,a,b;
   cin>>n >>a >>b;
   for(int i=1;i<=n;i++)
   {
       cin>>kaleen[i] ;
   }
   for(int i=1;i<=n;i++)
   {
       cin>>bablu[i] ;
   }
   for(int i=1;i<=n;i++)
   {
       if(kaleen[i]>=bablu[i])
       {
           if(count1<=a)
           {
               sum1+=kaleen[i];
               count1++;
           }
           
       }
       else{
           if(count2<=b)
           {
               sum2+=bablu[i];
               count2++;
           }
           
       }
   }
   sum=sum1+sum2;
   cout<<sum;
    return 0;
}
