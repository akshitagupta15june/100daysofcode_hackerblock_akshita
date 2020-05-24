#include<iostream>
using namespace std;
int main() {
	int t;
    long long int n;
	cin>>t;
	while(t--)
	{
        int osum=0;
	    int esum=0;
		cin>>n;
        while(n!=0)
        {
            int rem=n%10;
            if((rem%2)==0)
            {
                esum+=rem;
            }
            else{
                osum+=rem;
            }
            n=n/10;
        }
        if((esum%4)==0 || (osum%3)==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
	}
	return 0;
}
