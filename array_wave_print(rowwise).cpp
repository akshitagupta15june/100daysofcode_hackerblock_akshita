#include<bits/stdc++.h>
using namespace std;
int m,n;

int arr[100][100];
void wave_print()
{ int i=0,j=0;
while(i!=m)
{
if(j==0)
{
for(j=0;j<n;j++)
cout<<arr[i][j]<<", ";
i++;
if(i==m){
    break;
}
}
else if(j==n)
{
for(j=n-1;j>=0;j--)
cout<<arr[i][j]<<", ";
i++;
j=0;
}
}
}
int main()
{
cin>>m>>n;
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cin>>arr[i][j];
}
}
wave_print();
cout<<"END";

}
