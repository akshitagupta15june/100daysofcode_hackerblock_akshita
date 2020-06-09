#include<iostream>
using namespace std;
int main() 
{
    //Modification
	int n;
	cin>>n;
	int b[n],lmax[n],rmax[n],min[n];


	for(int i=0; i<n; i++)
	{
		cin>>b[i];

	}	
	//for each building find the leftmost max building and rightmost max building including the building itself
	//1.LEFTMOST 
	lmax[0]=b[0];


    //Modification
    for(int i=1;i<n;i++)
        lmax[i]=max(lmax[i-1],b[i]);


	// for(int i=0; i<n; i++)
	// {
    //     for(int j=i-1; j>=0; j--)
    //     {
    //         if(b[i]>b[j])
    //         {
    //             lmax[i]=b[i];
    //         }
    //         else
    //         {
    //             lmax[i]=b[j];
    //         }

    //     }
    // }
    //1.rightMOST 


    //Modification
	rmax[n-1]=b[n-1];
    for(int i=n-2;i>=0;i--)
        rmax[i]=max(rmax[i+1],b[i]);


	// for(int i=n-1; i>0; i--)
	// {
    //     for(int j=i+1; j>=n; j++)
    //     {
    //         if(b[i]>b[j])
    //         {
    //             rmax[i]=b[i];
    //         }
    //         else
    //         {
    //             rmax[i]=b[j];
    //         }

    //     }
    // }
    for(int i=0; i<n; i++)
    {
        if(lmax[i]<rmax[i])
        {
            min[i]=lmax[i];
        }
        else
        {
            min[i]=rmax[i];
        }
    }
    int water=0;
    for(int i=0; i<n; i++)
    {
       
        water=water+min[i]-b[i];
    }
    cout<<water;

	return 0;
}
