#include<iostream>
using namespace std;
int main() {
	long long int p;
	cin>>p;
	int c=0;
	for(int i=2;i<p/2;i++)
	{
		if(p%i==0)
		{
			c=1;
			break;
		}
	}
	if(c==0)
	{
		cout<<"Prime";
	}
	else
	{
		cout<<"Not Prime";
	}
	return 0;
}
