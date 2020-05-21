#include<iostream>
using namespace std;
bool isSorted(int ar[],int N)
{
  if(N==1)
  {
    return true;
  }
  if(ar[0]<=ar[1] && isSorted(ar+1,N-1))
  {
    return true;
  }
  return false;
}
int main()
{
	int N;
	cin>>N;
	int ar[N];
	for(int i=0;i<N;i++)
	{
	  cin>>ar[i];
	}
	bool y=isSorted(ar,N);
	if(y==1)
	cout<<"true";
	else
	cout<<"false";
	return 0;
}
