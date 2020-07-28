#include<iostream>
using namespace std;
#define max 100000
int multiply(int x,int ar[],int ar_size)
{
  int carry=0;
  for(int i=0;i<ar_size;i++)
  {
    int prod=ar[i]*x+carry;
    ar[i]=prod%10;
    carry=prod/10;
  }
  while(carry)
  {
    ar[ar_size]=carry%10;
    carry=carry/10;
    ar_size++;
  }
  return ar_size;
}
void factorial(int N)
{
  int ar[max];
  ar[0]=1;
  int ar_size=1;
  for(int x=2;x<=N;x++)
  {
    ar_size=multiply(x,ar,ar_size);
  }
  for(int i=ar_size-1;i>=0;i--)
  {
    cout<<ar[i];
  }
}
int main()
{
  int N;
  cin>>N;
  factorial(N);
  return 0;
}
