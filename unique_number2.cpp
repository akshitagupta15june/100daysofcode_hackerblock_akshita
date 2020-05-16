#include <iostream>
#include<algorithm>
using namespace std;
int main(int argc, char **argv)
{
	int n;
    int arr[100005];
    cin>>n;
    int no;
    int res=0;
    for(int i=0;i<n;i++)
    {
       cin>>no;
       arr[i]=no;
       res=res^no;
    }
    int temp=res;
    int pos=0;
    while((temp&1)!=1)
    {
        pos++;
        temp=temp>>1;
    }
    int mask=(1<<pos);
    int a=0;
    int b=0;
    for(int i=0;i<n;i++)
    {
        if((arr[i]&mask)>0)
        {
           a=a^arr[i]; 
        }
    }
    b=res^a;
    cout<<min(a,b)<<" "<<max(a,b)<<endl;
    
	return 0;
}
